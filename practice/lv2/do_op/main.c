/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:44:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 23:26:00 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int		ft_calculate(int n1, char op, int n2)
{
	int ans;

	if (op == '+')
		ans = ft_sum(n1,n2);
	if (op == '-')
		ans = ft_sub(n1,n2);
	if (op == '*')
		ans = ft_mul(n1,n2);
	if (op == '/')
		ans = ft_div(n1,n2);
	if (op == '%')
		ans = ft_mod(n1,n2);
	return (ans);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	*op;

	if (argc == 4)
	{	
		n1 = ft_atoi(argv[1]);
		n2 = ft_atoi(argv[3]);
		op = argv[2];
		if (n2 == 0 && *op == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (n2 == 0 && *op == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(ft_calculate(n1, *argv[2], n2));
		ft_putchar('\n');
	}
	if (argc != 4)
		ft_putchar('\n');
	return (0);
}
