/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/21 16:07:03 by nquere            #+#    #+#             */
/*   Updated: 2014/04/22 16:52:14 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read(int const fd, char **buf)
{
	int		ret;

	ret = 0;
	*buf = (char *)malloc((sizeof(char) * BUFF_SIZE) + 1);
	if (*buf == NULL)
		return (-1);
	ret = read(fd, *buf, BUFF_SIZE);
	return (ret);
}

static int	ft_buf(char **buf, int *i, char **line)
{
	while (*buf && (*buf)[(*i)])
	{
		if ((*buf)[(*i)] == '\n')
		{
			*line = ft_strnjoin(*line, *buf, (*i));
			(*i)++;
			*buf = &(*buf)[(*i)];
			return (1);
		}
		(*i)++;
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static char	*buf;
	int			ret;
	int			i;

	*line = NULL;
	if (!buf)
		buf = ft_strnew(BUFF_SIZE + 1);
	while (1)
	{
		i = 0;
		if (ft_buf(&buf, &i, line) == 1)
			return (1);
		*line = ft_strnjoin(*line, buf, i);
		ret = ft_read(fd, &buf);
		if (ret < 1)
		{
			ft_strdel(&buf);
			return (ret);
		}
		buf[ret] = '\0';
	}
}
