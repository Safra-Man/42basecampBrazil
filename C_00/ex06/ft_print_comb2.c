/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:38:54 by wsafra-l          #+#    #+#             */
/*   Updated: 2020/12/02 22:59:14 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb2(char i, char j, char k, char l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!((i == '9') && (j == '8') && (k == '9') && (l == '9')))
	{
		write(1, ", ", 2);
	}
}

void	ft_second_loop(char i, char j, char k, char l)
{
	while (l <= '9')
	{
		if (i == k && j < l)
		{
			ft_write_comb2(i, j, k, l);
		}
		else if (i < k)
		{
			ft_write_comb2(i, j, k, l);
		}
		l++;
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0';
	j = '0';
	k = '0';
	l = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				ft_second_loop(i, j, k, l);
				k++;
				l = '0';
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
}
