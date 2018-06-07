/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:44:01 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/04 20:44:03 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if ((n % 2 == 0) && (n / 2 == 1))
		return (1);
	if ((n % 2 == 0) && (n / 2 != 1))
		return(is_power_of_2(n / 2));
	if (n % 2 == 1)
		return (0);
	else
		return (0);
}

int main()
{
	unsigned int n = 5;
	printf("%d", is_power_of_2(n));
	return (0);
}
