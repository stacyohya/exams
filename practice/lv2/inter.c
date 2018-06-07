/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:11:26 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/01 16:11:29 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int check[128];
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		check[(int) s2[i]] = 1;
		i++;
	}
	while (s1[j] != '\0')
	{
		if (check[(int) s1[j]] == 1)
		{
			write(1, &s1[j], 1);
			check[(int) s1[j]] = 0;
		}
		j++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
		write (1,"\n", 1);
	}
	else
		write (1,"\n", 1);
	return (0);
}