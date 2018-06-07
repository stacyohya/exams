#include <stdio.h>

int ft_strlen(char *str)
{
	int count;
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return(count);
}

int main()
{
	char *str;
	str = "how are you";
	printf("%d", ft_strlen(str));
	return 0;
}