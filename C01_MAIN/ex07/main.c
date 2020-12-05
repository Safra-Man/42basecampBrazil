ex07

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int total = 9;
    int array_i[total];
    int count_i;
    int *pointer;
    int pointer_i = 0;
    int pointer_new = 0;

    count_i = 0;
    while (count_i < total)
    {
        array_i[count_i] = count_i + 1;
        count_i++;
    }

    pointer = array_i;

    while(pointer_i < total)
    {
        printf("%d",pointer[pointer_i]);
        printf(",");
        pointer_i++;
    }

    ft_rev_int_tab(pointer, total);

    printf("\n");
    while(pointer_new < total)
    {
        printf("%d",pointer[pointer_new]);
        printf(",");
        pointer_new++;
    }
    printf("\n");

    return (0);
}
