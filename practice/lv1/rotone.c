/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:28:43 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/01 11:28:46 by szhuang          ###   ########.fr       */
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

char	*rotone(char *str)
{
	char	*ans;

	ans = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = ((*str - 'a' + 1) % 26 + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = ((*str - 'A' + 1) % 26 + 'A');
		str++;
	}
	return (ans);
}


int		main(int argc, char **argv)
{
	if (argc ==2)
	{
		ft_putstr(rotone(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
