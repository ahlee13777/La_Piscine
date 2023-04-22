/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:27:25 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 14:34:41 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i * i <= (long long)nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
			continue ;
		}
		i++;
	}
	return (nb);
}
