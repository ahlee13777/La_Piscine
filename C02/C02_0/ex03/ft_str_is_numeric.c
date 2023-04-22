/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:05:35 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 13:43:17 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_str_is_numeric("9138"));
	printf("%d\n", ft_str_is_numeric("91.01/38"));
    printf("%d\n", ft_str_is_numeric("A12"));
}
*/
