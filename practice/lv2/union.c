/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:49:39 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/05 12:49:42 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_union(char *s1, char *s2)
{
	int check[128];
	int i;

	i = 0;
	while (i < 128)
	{
		check[i] = 0;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		check[(int) s1[i]]++;
		if (check[(int) s1[i]] == 1)
			write (1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		check[(int) s2[i]]++;
		if (check[(int) s2[i]] == 1)
			write (1, &s2[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}