/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:42:24 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 19:40:59 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i - 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		i++;
	}
	return (i);
}

int	ft_num_len(char *str, char *base)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (str[i])
	{
		j = 0;
		flag = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
			return (i);
		i++;
	}
	return (i);
}

long long	ft_atoi_rev(char *str, char *base, int base_len, int num_len)
{
	int			i;
	int			j;
	int			count;
	long long	tmp;
	long long	result;

	i = 0;
	result = 0;
	while (i++ < num_len)
	{
		j = 0;
		tmp = 0;
		while (base[j])
		{
			if (str[i - 1] == base[j++])
			{
				tmp = j - 1;
				count = 0;
				while (count++ < num_len - i)
					tmp *= base_len;
			}
		}
		result += tmp;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	int			num_len;
	int			base_len;
	long long	result;

	i = 0;
	sign = 1;
	base_len = ft_base_len(base);
	if (base_len < 2)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r' )
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	num_len = ft_num_len(&str[i], base);
	result = ft_atoi_rev(&str[i], base, base_len, num_len);
	return (sign * result);
}
