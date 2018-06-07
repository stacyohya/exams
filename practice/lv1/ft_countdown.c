#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_countdown(char i)
{
	i = '9';
	while ('0' <= i)
	{
		ft_putchar(i);
		i--;
	}
}



int main()
{
	char i;
	ft_countdown(i);
	ft_putchar('\n');
	return (0);
}