/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:49:41 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/27 19:47:54 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char **argv, int j, int jj)
{
	while (argv[j][jj] || argv[j + 1][jj])
	{
		if (argv[j][jj] != argv[j + 1][jj])
			return ((unsigned char)argv[j][jj] - \
					(unsigned char)argv[j + 1][jj]);
		jj++;
	}
	return (0);
}

void	ft_swap(char **p1, char **p2)
{
	char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	ft_print_argv(int i, int j, int argc, char **argv)
{
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n ", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv, j, 0) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	ft_print_argv(1, 0, argc, argv);
}
