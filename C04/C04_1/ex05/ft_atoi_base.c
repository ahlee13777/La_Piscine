/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:42:24 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 23:18:10 by ahhlee           ###   ########.fr       */
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

long long	ft_atoi_rev(char *str, char *base, int base_len)
{
	int			i;
	int			j;
	long long	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] != base[j])
			{	
				j++;
				continue ;
			}
			num = (num + j) * base_len;
			break ;
		}
		i++;
	}
	num /= base_len;
	return (num);
}

void	ft_atoi_2(char *str, int *i, int *sign)
{
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'\
			|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
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
	int			sign;
	long long	num;
	int			base_len;

	i = 0;
	sign = 1;
	base_len = ft_base_len(base);
	if (base_len < 2)
		return (0);
	ft_atoi_2(str, &i, &sign);
	num = ft_atoi_rev(&str[i], base, base_len);
	return (sign * num);
}
