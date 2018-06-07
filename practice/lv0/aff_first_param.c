#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_aff_first_param(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}




int main(int argc, char **argv)
{
	if (argc == 1)
		ft_putchar('\n');
	else
		ft_aff_first_param(argv[1]);
	return (0);
}