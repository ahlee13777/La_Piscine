#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	str_copy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strs;

	i = 0;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs == NULL)
		return (NULL);
	while (i < ac)
	{
		strs[i].size = str_len(av[i]);
		strs[i].str = av[i];
		strs[i].copy = (char *)malloc(sizeof(char) * (strs[i].size + 1));
		if (strs[i].copy == NULL)
			return (NULL);
		str_copy(strs[i].copy, av[i], strs[i].size);
		i++;
	}
	strs[i].str = 0;
	return (strs);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

#include <stdio.h>
int main()
{
	t_stock_str *strs;
	char *av[3] =
	{
		"a",
		"bb",
		"ccc"
	};
	strs = ft_strs_to_tab(3, av);
	ft_show_tab(strs);
}
