/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:45:33 by szhuang           #+#    #+#             */
/*   Updated: 2018/05/25 12:45:34 by szhuang          ###   ########.fr       */
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

char	*ft_rot42(char *str)
{
	char	*ans;

	ans = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = (((*str - 'a' + 42) % 26) + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = (((*str - 'A' + 42) % 26) + 'A');
		str++;
	}
	return (ans);
}

int		main(int argc, char **argv)
{
	if (argc ==2)
	{
		ft_putstr(ft_rot42(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}