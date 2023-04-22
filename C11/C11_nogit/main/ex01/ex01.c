/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:53:49 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/31 12:18:54 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int *ft_map(int *, int, int(*f)(int));

int	ft_put(int nb)
{
	nb *= 10;
	printf("%d ", nb);
	return (nb);
}

int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	ft_map(tab, 6, &ft_put);
}
