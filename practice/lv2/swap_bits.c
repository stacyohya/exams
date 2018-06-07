/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:42:18 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/06 10:42:22 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char ans)
{
	int i;
	i = 128;
	while (i > 0)
	{
		if (i & ans)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i = i >> 1;
	}
}

unsigned char ft_swap_bits(unsigned char octet)
{
	int swap;
	swap = (octet >> 4 | octet << 4);
	return (swap);
}

int main()
{
	unsigned char octet = 'z';
	print_bits(ft_swap_bits(octet));
	return (0);
}