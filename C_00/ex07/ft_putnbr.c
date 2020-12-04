/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:50:34 by wsafra-l          #+#    #+#             */
/*   Updated: 2020/12/04 12:53:00 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_putnbr(char i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_write_putnbr('8');
		}
		else if (nb < 0)
		{
			ft_write_putnbr('-');
			ft_putnbr(-nb);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_write_putnbr(nb % 10 + '0');
		}
		else
		{
			ft_write_putnbr(nb + '0');
		}
	}
}
