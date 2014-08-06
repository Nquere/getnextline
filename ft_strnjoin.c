/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 16:47:41 by nquere            #+#    #+#             */
/*   Updated: 2014/04/22 16:51:59 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnjoin(char *s1, char const *s2, int n)
{
	char	*new;
	int		len1;
	int		i;
	int		j;

	i = 0;
	len1 = (s1 == NULL) ? 0 : ft_strlen(s1);
	new = (char *)malloc((sizeof(char) * (len1 + n)) + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (j < len1)
		new[i++] = s1[j++];
	if (s1)
		ft_strdel(&s1);
	j = 0;
	while (j < n)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
