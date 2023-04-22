/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:41:40 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/22 16:41:41 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	first_memory(char *str, int i)
{
	long int	mem_num;
	char		mem[16];

	mem_num = (long int)str;
	while (i < 16)
	{
		mem[i++] = "0123456789adcdef"[mem_num % 16];
		mem_num /= 16;
	}
	i = 16;
	while (i > 1)
		write(1, &mem[i--], 1);
	write(1, ": ", 1);
}

void	word_memory(char *str, int i, int count)
{
	while (count++ < 16)
	{
		if (str[i] == '\0')
			break ;
		write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
		write(1, &"0123456789abcdef"[(unsigned char)str[i++] % 16], 1);
		if (i % 2 == 0)
			write(1, "  ", 1);
	}
}

void	print_str(char *str, int i, int count)
{
	while (count++ < 16)
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if (str[i] < 32 || str[i] > 126)
			write(1, ". ", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	line;
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)addr;
	line = (size + 15) / 16;
	while (line)
	{
		first_memory(&str[i], 0);
		word_memory(&str[i], 0, 0);
		print_str(&str[i], 0, 0);
		i += 16;
		line --;
	}
	return (addr);
}
