/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:17:51 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/12 21:54:25 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	al;

	al = 'a';
	while (al <= 'z')
	{
		write(1, &al, 1);
		al++;
	}
}
