#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;

	a = 104;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("div (a) = %d", a);
	printf("\n");
	printf("mod (b) = %d", b);
	printf("\n");
}