/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:03:33 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/31 12:19:39 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		tab[i] = f(tab[i]);
		i++;
	}
	return (tab);
}
