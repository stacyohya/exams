/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:32:25 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/04 20:32:28 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_alpha_mirror(char *str)
{
	char ans;

	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
		{
			ans = 'z' - *str + 'a';
			ft_putchar(ans);
		}
		else if ('A' <= *str && *str <= 'Z')
		{
			ans = 'Z' - *str + 'A';
			ft_putchar(ans);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_alpha_mirror(argv[1]);
		write (1,"\n", 1);
	}
	else
		write (1,"\n", 1);
	return (0);
}
