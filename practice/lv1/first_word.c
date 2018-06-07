#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_first_word(char *str)
{
	while (*str != '\0')
	{
		if (*str == ' '|| *str == '\t')
			str++;
		else
		{
			ft_putchar(*str);
			str++;
			if (*str == ' '|| *str == '\t')
				break;
		}
	}
	ft_putchar('\n');
}





int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_first_word(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}