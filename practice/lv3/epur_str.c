/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:10:13 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/07 13:10:15 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_epur (char *str)
{
	
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_epur(argv[1]);
		write (1, "\n", 1);
	}
	else
		write(1,"\n",1);
	return (0);
}