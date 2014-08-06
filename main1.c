
#include "get_next_line.h"

void	ft_putstr(char const *s);
void	ft_putendl(char const *s);

int    main(int ac, char **av)
{
	int		fd = 0;
	char	*line = 0;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
/*		ft_putstr("/DEBUT_DE_LIGNE/");*/
		ft_putendl(line);
/*		ft_putendl("/FIN_DE_LIGNE/");*/
		free(line);
	}
	fd = close(fd);
	return (0);
}
