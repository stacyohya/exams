/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:35:53 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/01 11:35:56 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *ans)
{
	while (*ans != '\0')
	{
		ft_putchar(*ans);
		ans++;
	}
}

int ft_strlen(char *word)
{
	int count;
	count = 0;
	while (*word != '\0')
	{
		count++;
		word++;
	}
	return (count);
}


char *search_and_replace(char *str, char *tar, char *new)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == tar[0])
			str[i] = new[0];
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1) 
	{
		ft_putstr(search_and_replace(argv[1], argv[2], argv[3]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}