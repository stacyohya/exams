/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:26:15 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/06 14:26:17 by szhuang          ###   ########.fr       */
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
	else
	{
		ft_putnbr (ans / 10);
		ft_putnbr (ans % 10);
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

int ft_prime_check(int num)
{
	int counter;
	counter = 2;
	if (num == 2 || num == 3)
		return (1);
	while (counter <= num/2)
	{
		if (num % counter == 0)
			return (0);
		counter++;
	}
	return(1);
}


int ft_add_prime_sum(char *str)
{
	int x;
	int sum;
	int i;
	x = ft_atoi(str);
	sum = 0;
	i = 2;
	if (x > 1)
	{
		if (x == 2)
			return (2);
		else if (x == 3)
			return (5);
		else
		{
			while(i <= x)
			{
				if (ft_prime_check(i))
					sum = sum + i;
				i++; 
			}
			return (sum);
		}
	}
	else
		return (0);
}




int main (int argc, char **argv)
{
	int ans;

	if (argc == 2)
	{
		ans = ft_add_prime_sum(argv[1]);
		//printf("%d\n", ans);
		ft_putnbr(ans);
		write (1,"\n", 1);
	}
	else
		write (1,"\n", 1);
	return (0);
}