/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:30:43 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 16:11:58 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65)
			return (0);
		else if (str[i] > 91 && str[i] < 97)
			return (0);
		else if (str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_alpha("9138ahjdd"));
	printf("%d\n", ft_str_is_alpha("91.,01/38"));
	printf("%d\n", ft_str_is_alpha("9A138./"));
	printf("%d\n", ft_str_is_alpha(""));
}
*/
