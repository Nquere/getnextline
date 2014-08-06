/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 11:41:14 by nquere            #+#    #+#             */
/*   Updated: 2014/04/15 11:49:40 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *s, int c, size_t len)
{
	int		i;
	char	*p;

	i = 0;
	p = s;
	while (i < (int)len)
	{
		p[i] = (char)c;
		i++;
	}
	return (s);
}