#include <stdio.h>

int ft_ft(int *nbr);

int	main(void)
{
	int a;
	
	a=12;
	ft_ft(&a);
	printf("%d", a);
	printf("\n");

	return (0);
}
