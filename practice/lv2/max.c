/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:27:03 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/05 12:27:06 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max (int *tab, unsigned int len)
{
	int max;
	int idx;

	max = 0;
	idx = 0;
	while (idx < len)
	{
		if (tab[idx] > max)
		{
			max = tab[idx];
			idx++;
		}
		else
			idx++;
	}
	return(max);
}

int main ()
{
	int arr[] = {4,5,6,-8};
	unsigned int len = 4;
	printf("%d\n", max(arr, len));	
	return (0);
}
