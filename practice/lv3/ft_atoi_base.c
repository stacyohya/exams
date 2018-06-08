/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ator_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:06:05 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/07 15:06:07 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_transfer (char num)
{
	int nbr;
	if (num >= 'A' && num <= 'Z')
		nbr = num - 'A' + 10;
	else if (num >= 'a' && num <= 'z')
		nbr = num - 'a' + 10;
	else
		nbr = num - '0'; 
	return (nbr);
}




int ft_atoi_base (const char *str, int str_base)
{
	int sign;
	int num;
	sign = 1;
	num = 0;
	while(*str == ' ' || *str == '\t' || *str == '\n' || *str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while(*str)
	{
		if (str_base <= 10)
			num = num * str_base + *str - '0';
			//because 0-9 the ascii number is continous
		else
			num = num * str_base + ft_transfer(*str);
		str++;	
	}
	return (num * sign);
}

int main ()
{
	char *str;
	int base;
	int num;

	str = "-3e8";
	base = 0;
	num = ft_atoi_base(str, base);
	printf("%d\n", num);
	return (0);
}