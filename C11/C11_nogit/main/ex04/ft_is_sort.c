/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:33:11 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/31 23:13:11 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	dsc;

	i = 0;
	asc = 0;
	dsc = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			asc++;
		if (f(tab[i], tab[i + 1]) >= 0)
			dsc++;
		i++;
	}
	if ((asc == length - 1) || (dsc == length - 1))
		return (1);
	return (0);
}
