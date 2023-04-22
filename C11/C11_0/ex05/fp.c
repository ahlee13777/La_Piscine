/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:22:19 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/31 18:28:25 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

void	add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : divison by zero\n");
		return ;
	}
	ft_putnbr(a / b);
	ft_putchar('\n');
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(a % b);
	ft_putchar('\n');
}
