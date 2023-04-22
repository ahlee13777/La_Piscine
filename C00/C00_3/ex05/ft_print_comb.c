/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:37:07 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/16 13:34:22 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b)
{
	char	c;

	c = b + 1;
	while (c <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
			write(1, ", ", 2);
		c++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb();
}
*/
