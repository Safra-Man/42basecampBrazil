#include <stdio.h>

char        *ft_strlowcase(char *str);

int main(void)
{
    char str[]="dkjUWEIUQD";
    ft_strlowcase(str);
    printf ("%s\n", str);
}