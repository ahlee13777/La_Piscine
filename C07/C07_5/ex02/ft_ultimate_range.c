/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:22:32 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/30 12:15:17 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	long long	len;
	int			*arr;

	i = 0;
	len = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * len);
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	*range = arr;
	return (len);
}
