/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:19:21 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/13 12:44:38 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	if (c > 15)
	{
		ft_puthex(c / 16);
		c %= 16;
	}
	if (c <= 9)
		ft_putchar('0' + c);
	else if (c <= 15)
		ft_putchar('a' + c - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			ft_putchar('\\');
			ft_puthex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
