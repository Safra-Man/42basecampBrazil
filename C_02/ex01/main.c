#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char dest[] = "Analuz";
	char src[] = "Francisco";
	printf("%s", ft_strncpy(dest, src, 7));
	return 0;
}