/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:37:35 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/19 20:51:51 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size)
{
	size = (unsigned int) addr;
	return (0);
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char *s, int i)
{
	ft_putchar("0123456789abcdef"[*s / 16]);
	ft_putchar("0123456789abcdef"[*s % 16]);
	if (i % 2 == 1)
		write(1, "  ", 1);
}

void	ft_print_address(int i, int a)
{
	char	buf[16];

	while (i < 17)
	{
		buf[i++] = "0123456789abcdef"[a % 16];
		a = a / 16;
	}
	while (i > 0)
		write(1, &buf[i--], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	while (1)
	{
		ft_print_address(0, (int)&str[i]);
		write(1, ": ", 2);
		count = 0;
		if (size - i < 17)
		{
			while (count++ < 16)
			{
				ft_print_hex(&str[i], i);
				i++;
			}
		}
		else
		{	
			while (i <= size + 1)
			{
				ft_print_hex(&str[i], i);
				i++;
			}
		}		
	}
}
int	main()
{
	char c[] = "Bonjour les aminches\t\n\tc  
	est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";

	ft_print_memory((void *)c, sizeof(c));
}
*/
