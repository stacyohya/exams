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
	int i;
	i = 0;
	if (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
			i++;
		else if (str[i] ==' ')
		{
			if (str[i + 1] == '\0')
				break;
			if (str[i - 1] == ' ')
				i++;
			else
			{
				write (1, &str[i], 1);
				i++;
			}
		}
		else
		{
			write (1, &str[i], 1);
			i++;
		}
	}
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