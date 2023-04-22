/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:54:21 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/29 08:26:38 by ahhlee           ###   ########.fr       */
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
		if (base[i] == ' ' || (base[i] >= 9 && base [i] <= 13))
			return (0);
		if (ft_base_compare(base[i], base) != i)
			return (0);
		i++;
	}
	return (i);
}
