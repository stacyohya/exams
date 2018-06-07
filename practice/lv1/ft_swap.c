#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("swap:%d\n", *a);
	printf("swap:%d\n", *b);
}


int main()
{
	int c,d;
	c = 3,
	d = 9;
	int *a = &c;
	int *b = &d;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a,b);
	return (0);
}