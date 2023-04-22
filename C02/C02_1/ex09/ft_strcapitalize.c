/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:35:55 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 22:04:09 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check(char s)
{
	if (s >= 'A' && s <= 'Z')
		return (0);
	if (s >= '0' && s <= '9')
		return (0);
	if (s >= 'a' && s <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		flag = ft_check(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", str);
    printf("%s", ft_strcapitalize(str));
}
*/
