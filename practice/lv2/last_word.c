/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:27:32 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/04 21:27:36 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_last_word(char *str)
{
	while (*str != '\0')
		str++;
	str--;
	while (*str == ' ')
		str--;
	while (*str != ' ')
		str--;
	str++;
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			write (1, &*str, 1);
			str++;
		}
		else
			break;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_last_word(argv[1]);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return 0;
}	
