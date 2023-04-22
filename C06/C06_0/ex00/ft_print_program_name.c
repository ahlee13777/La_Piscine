/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:45:07 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 15:12:49 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	argc = 0;
	while (argc < 1)
	{
		j = 0;
		while (argv[0][j])
			write(1, &argv[0][j++], 1);
		argc++;
	}
	write(1, "\n ", 1);
}
