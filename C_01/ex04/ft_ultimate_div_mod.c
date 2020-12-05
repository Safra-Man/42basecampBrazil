/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:28:07 by wsafra-l          #+#    #+#             */
/*   Updated: 2020/12/04 16:51:57 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_orig;
	int b_orig;

	a_orig = *a;
	b_orig = *b;
	*a = a_orig / b_orig;
	*b = a_orig % b_orig;
}
