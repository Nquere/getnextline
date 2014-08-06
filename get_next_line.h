/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 17:00:38 by nquere            #+#    #+#             */
/*   Updated: 2014/04/22 17:00:46 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>

int		get_next_line(int const fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnjoin(char *s1, char const *s2, int n);
size_t	ft_strlen(const char *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
void	*ft_memset(void *b, int c, size_t len);

#endif
