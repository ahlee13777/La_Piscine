/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:22:32 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/28 11:38:10 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min + 1;
	range = (int **)malloc(sizeof(int *) * 2);
	range[0] = (int *)malloc(sizeof(int) * (len + 1));
	if (max - min <= 0)
		return (0);
	if (range == NULL || range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i++] = min;
		min++;
	}
	range[0][i] = '\0';
	range[1] = NULL;
	return (len);
}
