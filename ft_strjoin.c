/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 16:42:15 by nquere            #+#    #+#             */
/*   Updated: 2014/04/21 19:12:48 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*t;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	t = (char *)malloc(sizeof(char) * (len + 1));
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		t[i + j] = s2[j];
		j++;
	}
	t[i + j] = '\0';
	if (t)
		return (t);
	else
		return (NULL);
}
