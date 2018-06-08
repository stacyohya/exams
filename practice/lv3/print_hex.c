/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 22:30:36 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/07 22:30:42 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

void ft_putnbr(int ans)
{
	char c;
	if (ans <= 9)
	{
		c = ans+'0';
		write(1,&c, 1);
	}
	else if (ans >= 10 && ans <= 15)
	{
		c = ans + ('a' - 10);
		write(1,&c, 1);
	}
	else
	{
		ft_putnbr (ans / 16);
		ft_putnbr (ans % 16);
	}
}

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

int main (int argc, char **argv)
{
	int ans;

	if (argc == 2)
	{
		ans = ft_atoi(argv[1]);
		//printf("%d\n", ans);
		ft_putnbr(ans);
		write (1,"\n", 1);
	}
	else
		write (1,"\n", 1);
	return (0);
}