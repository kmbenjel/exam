#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putchar('\n');
	else
	{
		ft_putstr(av[ac - 1]);
		ft_putchar('\n');
	}
	return (0);
}
