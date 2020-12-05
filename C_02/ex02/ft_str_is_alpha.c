/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsafra-l <wsafra-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 01:28:18 by wsafra-l          #+#    #+#             */
/*   Updated: 2020/12/05 01:35:33 by wsafra-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	return (1);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (alpha(str[i]) == 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
