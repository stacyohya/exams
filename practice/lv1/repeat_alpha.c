#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_reat_alpha(char *str)
{
	int i;
	int j;
	i = 0;
	while(str[i] != '\0')
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			j = str[i] - 'a' + 1;
			while (j > 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if('A' <= str[i] && str[i] <= 'Z')
		{
			j = str[i] -'A' + 1;
			while (j >0)
			{
				ft_putchar(str[i]);
				j--;
			}

		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}



int main(int argc, char **argv)
{
	if (argc ==2)
		ft_reat_alpha(argv[1]);
	else 
		ft_putchar('\n');
	return 0;
}
