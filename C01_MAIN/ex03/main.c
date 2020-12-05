#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	div;
	int	mod;
	
	ft_div_mod(32, 5, &div, &mod);
	printf("div (a) = %d", div);
	printf("\n");
	printf("mod (b) = %d", mod);
	printf("\n");

}