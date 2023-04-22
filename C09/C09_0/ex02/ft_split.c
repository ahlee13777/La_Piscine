/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:17:21 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/30 21:31:59 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strcpy(char *dest, char *src, char *charset, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (src[i])
	{
		if (ft_check(src[i], charset))
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (i < len)
	{
		if (dest[i] != '\0' && dest[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int	ft_split_3(char **string, char *str, int *j)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
		i++;
	len = i;
	string[*j] = (char *)malloc(sizeof(char) * (len + 1));
	if (string[*j] == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		string[*j][i] = *str;
		i++;
		str++;
	}
	string[*j][i] = '\0';
	return (i);
}

void	ft_split_2(char **string, char *str2, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (str2[i] == '\0')
		{
			while (str2[i] == '\0')
				i++;
		}
		if (str2[i] != '\0')
		{
			i += ft_split_3(string, &str2[i], &j);
			j++;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word_count;
	char	*str2;
	char	**string;

	i = 0;
	while (str[i])
		i++;
	str2 = (char *)malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);
	word_count = ft_strcpy(str2, str, charset, i);
	string = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (string == NULL)
		return (NULL);
	ft_split_2(string, str2, i);
	string[word_count] = NULL;
	return (string);
}
