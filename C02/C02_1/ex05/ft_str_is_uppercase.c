/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:42:21 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/17 19:48:24 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_str_is_uppercase("Aa"));
    printf("%d\n", ft_str_is_uppercase("ABCDEFGH"));
    printf("%d\n", ft_str_is_uppercase("9A138./"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
