/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:40:44 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/05 14:40:49 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//z = 0111 1010
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

unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char rev;
	unsigned char lastword;

	i = 0;
	while (i < 7)
	{
		lastword = octet & 1;
		octet = octet >> 1;
		rev = rev + lastword;
		rev = rev << 1;
		i++;
	}
	return (rev);
}

int main()
{
	unsigned char octet = 'z';
	print_bits(reverse_bits(octet));
	return (0);
}
