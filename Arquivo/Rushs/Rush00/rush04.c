/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:27:47 by danascim          #+#    #+#             */
/*   Updated: 2020/11/23 14:57:35 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

/*
** imprime linha coluna por coluna hehe
*/

void	coluna(int x, char a, char b, char c)
{
	if (x > 0)
	{
		ft_putchar(a);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

/*
** x é coluna e largura (popula coluna por coluna em cada linha por linha) , y e linhas e altura
*/

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			coluna(x, 'A', 'B', '\\');
			y--;
		}
		while (y > 1)
		{
			coluna(x, 'B', ' ', 'B');
			y--;
		}
		if (y == 1)
		{
			coluna(x, 'C', 'B', 'A');
		}
	}
}
