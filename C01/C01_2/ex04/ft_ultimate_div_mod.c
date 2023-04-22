/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:27:44 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/16 14:22:47 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	if (b != 0)
	{
		tmp_a = *a;
		tmp_b = *b;
		*a = tmp_a / tmp_b;
		*b = tmp_a % tmp_b;
	}
}
/*
#include <stdio.h>

int main()
{
	int a; 
	int b; 

	a = 7;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d, mod: %d", a, b);
}
*/
