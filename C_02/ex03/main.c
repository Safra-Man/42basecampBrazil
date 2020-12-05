#include <stdio.h>

int        ft_str_is_numeric(char *str);

int main(void)
{
    char str[]="092";
    int a;

    a=ft_str_is_numeric(str);
    printf ("%d\n", a);
}