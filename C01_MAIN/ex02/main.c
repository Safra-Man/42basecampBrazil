#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main (void)
{
	int a;
	int b;

	a = 12;
	b = 15;


	printf("1º %d", a);
	printf("\n");
	printf("1º %d", b);
	printf("\n");
	ft_swap(&a, &b);
	printf("2º", a);
	printf("\n");
	printf("2º", b);
	printf("\n");
	
}
