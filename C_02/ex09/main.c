#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[]="Estou com sono e quero dormir rs";
    ft_strcapitalize(str);
    printf ("%s\n", str);
}