/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunoguei <gunoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:27:47 by danascim          #+#    #+#             */
/*   Updated: 2020/11/22 23:10:13 by gunoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			coluna(x, 'A', 'B', 'C');
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
