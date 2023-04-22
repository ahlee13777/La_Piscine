/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:22:32 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/29 12:59:47 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	i = 0;
	len = max - min;
	if (max - min <= 0)
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
