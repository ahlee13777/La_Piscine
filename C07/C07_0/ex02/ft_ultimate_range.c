/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:22:32 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/27 20:56:47 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (0);
	if (max - min <= 1)
		return (0);
	if (range == NULL || range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i++] = min;
		min++;
	}
	return (max - min);
}
