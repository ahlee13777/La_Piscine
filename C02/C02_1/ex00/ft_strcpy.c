/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:49:25 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/18 22:03:42 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	dest1[5];
	char	dest2[6];
	char	src[] = "srcc";

	printf("d1:%s.\t%s.\n", ft_strcpy(dest1, src), strcpy(dest1, src));
	printf("d1:%s.\t%s.",  ft_strcpy(dest2, src), strcpy(dest2, src));
}
*/
