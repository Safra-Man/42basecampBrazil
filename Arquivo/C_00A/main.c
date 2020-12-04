
#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);


int	main(void)
{
	printf("ex00\n");
	ft_putchar('A');
	ft_putchar('\n');
	printf("ex01\n");
	ft_print_alphabet();
	ft_putchar('\n');
	printf("ex02\n");
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	printf("ex03\n");
	ft_print_numbers();
	ft_putchar('\n');
	printf("ex04\n");
	ft_is_negative(-10);
	ft_is_negative(0);
	ft_is_negative(123);
	ft_putchar('\n');
	printf("ex05\n");
	ft_print_comb();
	ft_putchar('\n');
	printf("ex06\n");
	ft_print_comb2();
	ft_putchar('\n');
	printf("ex07\n");
	ft_putnbr(42);
	ft_putchar('\n');
	return (0);
}