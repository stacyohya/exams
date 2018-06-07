#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int i;
	i = 0;
	while (i < 13)
	{
		ft_putchar('z' - i * 2);
		ft_putchar('Y' - i * 2);
		i++;
	}
	return (0);
}