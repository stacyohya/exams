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

char	*ft_rot13(char *str)
{
	char	*ans;

	ans = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = (((*str - 'a' + 13) % 26) + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = (((*str - 'A' + 13) % 26) + 'A');
		str++;
	}
	return (ans);
}

int		main(int argc, char **argv)
{
	if (argc ==2)
	{
		ft_putstr(ft_rot13(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}