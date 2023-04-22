/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 08:20:15 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/29 08:25:15 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_row_size(int size, char **strs)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		j++;
		num += j;
		i++;
	}
	return (num);
}

char	*ft_strjcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		total_len;
	char	*str;

	i = 0;
	j = 0;
	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	total_len = ft_strlen(sep) * (size - 1) + total_row_size(size, strs);
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	str[0] = '\0';
	if (str == NULL)
		return (NULL);
	while (i < size - 1)
	{
		str = ft_strjcat(str, strs[i++]);
		str = ft_strjcat(str, sep);
	}
	str = ft_strjcat(str, strs[i]);
	return (str);
}
