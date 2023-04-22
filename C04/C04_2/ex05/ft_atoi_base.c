/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:42:24 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/26 14:33:24 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_compare(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 8 && base [i] <= 13))
			return (0);
		if (ft_base_compare(base[i], base) != i)
			return (0);
		i++;
	}
	return (i);
}

long long	ft_atoi_rev(char *str, int i, char *base, int base_len)
{
	int			flag;
	long long	num;

	num = 0;
	while (str[i])
	{
		flag = ft_base_compare(str[i], base);
		if (flag == -1)
			break ;
		else
			num = (num + flag) * base_len;
		i++;
	}
	num /= base_len;
	return (num);
}

void	ft_atoi_2(char *str, int *i, long long int *sign)
{
	if (str[*i] == ' ' || (str[*i] >= 8 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = *sign * -1;
		(*i)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	long long	sign;
	long long	num;
	int			base_len;

	i = 0;
	sign = 1;
	base_len = ft_base_len(base);
	if (base_len < 2)
		return (0);
	ft_atoi_2(str, &i, &sign);
	num = ft_atoi_rev(&str[i], 0, base, base_len);
	return (sign * num);
}

#include <stdio.h>

int main()
{
	char str[] = "123444";
	char base[] = " ";
}
