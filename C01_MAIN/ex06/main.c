#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char texto[] = "Pelo amor de deus abre slot!! x.x";
	int teste;

	teste = ft_strlen(texto);
	printf("Caracteres nX %d", teste);
	printf("\n");
	return (0);
}
