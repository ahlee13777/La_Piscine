/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:09:54 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/27 20:56:06 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_compare(char c, char *base);
int	ft_base_len(char *base);

int	ft_putnbr(long long nb, char *arr, char *base, int len)
{
	int	i;
	int	size;
	int	flag;

	i = 0;
	size = 0;
	flag = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		flag = 1;
	}
	while (nb)
	{
		arr[i++] = base[nb % len];
		nb /= len;
	}
	if (flag)
		arr[i++] = '-';
	arr[i] = '\0';
	size += i;
	return (size);
}

int	ft_atoi(char *str, int i, char *base, int base_len)
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

int	ft_atoi_base(char *str, char *base, int base_f_len)
{
	int			i;
	long long	sign;
	long long	num;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	num = ft_atoi(&str[i], 0, base, base_f_len);
	return (sign * num);
}

void	ft_result(char *result, char *arr, int size)
{
	int	i;

	i = 0;
	while (size--)
	{
		result[i] = arr[size];
		i++;
	}
	result[i] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_f_len;
	int		base_t_len;
	int		num;
	char	*result;
	char	arr[100];

	base_f_len = ft_base_len(base_from);
	base_t_len = ft_base_len(base_to);
	if (base_f_len < 2 || base_t_len < 2)
		return (NULL);
	num = ft_atoi_base(nbr, base_from, base_f_len);
	num = ft_putnbr(num, arr, base_to, base_t_len);
	result = (char *)malloc(sizeof(char) * num + 10);
	if (result == NULL)
		return (NULL);
	ft_result(result, arr, num);
	return (result);
}
