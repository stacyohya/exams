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
		ft_putchar('a'+ i * 2);
		ft_putchar('B' + i * 2);
		i++;
	}
	return (0);
}