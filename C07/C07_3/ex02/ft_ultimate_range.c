/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:22:32 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/29 08:45:37 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	range = (int **)malloc(sizeof(int *) * 2);
	range[0] = (int *)malloc(sizeof(int) * (len));
	if (range == NULL || range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i++] = min;
		min++;
	}
	range[1] = NULL;
	return (len);
}
