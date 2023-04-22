/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:03:13 by ahhlee            #+#    #+#             */
/*   Updated: 2023/02/01 15:46:54 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + str[i++] - '0';
	}
	return (sign * num);
}

int	ft_op_check(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		return (3);
	else if (op == '%')
		return (4);
	else
		return (-1);
}

int	main(int ac, char **av)
{
	int	op_num;
	int	(*fp[5])(int, int);

	fp[0] = add;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;
	fp[4] = mod;
	if (ac != 4)
		return (0);
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*' && \
			av[2][0] != '/' && av[2][0] != '%') || av[2][1] != '\0')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	op_num = ft_op_check(av[2][0]);
	fp[op_num](ft_atoi(av[1]), ft_atoi(av[3]));
}
