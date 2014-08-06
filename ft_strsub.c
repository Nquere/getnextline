/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 16:31:17 by nquere            #+#    #+#             */
/*   Updated: 2014/04/21 19:13:41 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		j;
	char	*t;

	j = 0;
	t = (char *)malloc(sizeof(char) * (len - start + 1));
	if (t)
	{
		while (j < (int)len)
		{
			t[j] = s[start];
			start++;
			j++;
		}
		t[start] = '\0';
		return (t);
	}
	else
		return (NULL);
}
