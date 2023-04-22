/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:52:59 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 23:17:50 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_2(long long nb, int len, char *base)
{	
	if (nb < 0)
	{
		write(1, "- ", 1);
		nb = nb * -1;
	}
	if (nb >= len)
	{
		ft_putnbr_2(nb / len, len, base);
		ft_putnbr_2(nb % len, len, base);
	}
	if (nb < len)
		write(1, &base[nb], 1);
}

int	ft_base_check(char *base, int i, int j)
{
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{	
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		i;

	i = 0;
	len = ft_base_check(base, 0, 0);
	if (len < 2)
		return ;
	ft_putnbr_2((long long)nbr, len, base);
}
