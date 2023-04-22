/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:58:42 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 15:58:31 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char	s1[3] = { 127, 22, 0 };
	char	s2[4] = { 33, 44, 32, 0 };
	char	s3[4] = { 126, 33, 55, 0 };
	char	s4[4] = { 0, 66, 0 };  
	
	printf("0 %d\n", ft_str_is_printable(s1));
	printf("1 %d\n", ft_str_is_printable(s2));
	printf("1 %d\n", ft_str_is_printable(s3));
	printf("1 %d\n", ft_str_is_printable(s4));
}
*/
