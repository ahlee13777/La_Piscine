/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:46:02 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/19 20:47:12 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{	
	int		i;
	char	*arr;

	i = 0;
	arr = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &arr[(unsigned char)str[i] / 16], 1);
			write(1, &arr[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
    char    s[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(s);
}
*/
