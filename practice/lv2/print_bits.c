/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:42:14 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/05 13:42:18 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void print_bits(unsigned char octet)
{
	int oct;
	int div;

	div = 128;
	oct = octet;
	//printf("%d\n", oct);
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1,"0",1);
		div = div / 2;
	}
}

int main()
{
	unsigned char octet = 'z';
	print_bits(octet);
	return (0);
}
