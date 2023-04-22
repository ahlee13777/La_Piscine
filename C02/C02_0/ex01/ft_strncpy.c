/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:25:57 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 13:33:40 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (dest[i] == '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= (int)n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char    dest1[5];
    char    dest2[6];
    char    src[] = "srcc";

    printf("d1:%s.\t%s.\n", ft_strncpy(dest1, src, 5), strncpy(dest1, src, 5));
    printf("d2:%s.\t\t%s.",  ft_strncpy(dest2, src, 3), strncpy(dest2, src, 3));
}
*/
