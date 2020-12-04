
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
	ft_putnbr(-42);
	ft_putchar('\n');
	return (0);
}
/*
alias www='gcc -Wall -Wextra -Werror *.c ; ./a.out 'OK!!'

// Função para Compilar usando o comando www al invés do textão ai


alias mobilete="norminette -R CheckForbiddenSourceHeader" &&
alias ce="gcc -Wall -Wextra -Werror *.c" &&
alias ec="./a.out" &&
alias 00="cd ex00" &&
alias g0="cd ../ex00" &&
alias g1="cd ../ex01" &&
alias g2="cd ../ex02" &&
alias g3="cd ../ex03" &&
alias g4="cd ../ex04" &&
alias g5="cd ../ex05" &&
alias g6="cd ../ex06" &&
alias g7="cd ../ex07" &&
alias g8="cd ../ex08" &&
alias g9="cd ../ex09" &&
alias g10="cd ../ex10" &&
alias g11="cd ../ex11" &&
alias g12="cd ../ex12"


gcc -Wall -Wextra -Werror ./main.c ex0{0..7}/*.c -o teste && ./teste && rm teste
*/
