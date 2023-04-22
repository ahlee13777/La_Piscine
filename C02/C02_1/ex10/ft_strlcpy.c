/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:07:23 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 22:04:22 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i])
	{
		if (i + 1 < size)
			dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char    dest1[5];
    char    dest2[6];
	char 	dest11[5];
	char	dest22[6];
    char    src1[] = "srcc";
    char    src2[] = "srcc";
    char    src11[] = "srcc";
    char    src22[] = "srcc";

    printf("%s %d\t", dest1, ft_strlcpy(dest1, src1, 3));
    printf("%s %lu\n", dest11, strlcpy(dest11, src11, 3));

    printf("%s %d\t", dest2, ft_strlcpy(dest2, src2, 6));
    printf("%s %lu", dest22, strlcpy(dest22, src22, 6));
}
*/
