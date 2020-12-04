/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:33:23 by wsafra-l          #+#    #+#             */
/*   Updated: 2020/12/04 14:08:07 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_a;
char g_b;
char g_c;

void	ft_print_comb(void)
{
	g_a = '0';
	g_b = '1';
	g_c = '2';
	while (g_a < '8')
	{
		while (g_b <= '8')
		{
			while (g_c <= '9')
			{
				if ((g_a < g_b) && (g_b < g_c))
				{
					write(1, &g_a, 1);
					write(1, &g_b, 1);
					write(1, &g_c, 1);
					if (g_a < '7')
						write(1, ", ", 2);
				}
				g_c++;
			}
			g_b++;
			g_c = '2';
		}
		g_a++;
		g_b = '1';
	}
}
