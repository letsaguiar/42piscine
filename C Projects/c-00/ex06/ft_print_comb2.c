/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:09:24 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/12 17:25:06 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print_number(int nb)
{
	if (nb < 10)
		ft_putchar('0');
	ft_putnbr(nb);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_print_number(n1);
			ft_putchar(' ');
			ft_print_number(n2);
			if (n1 < 98 || n2 < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
