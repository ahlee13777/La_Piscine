/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:36:10 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/15 20:58:10 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>
int main()
{
	int div;
	int mod;
	
	ft_div_mod(7, 2, &div, &mod);




	int *d;
    int *m;
	
	int dd;
    int mm;

    d = &dd;
    m = &mm;

	ft_div_mod(5, 3, d, m);
	



	printf("div: %d, mod: %d", div, mod);
	printf("d: %d, m: %d", *d, *m);
}
*/
