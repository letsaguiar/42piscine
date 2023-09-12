/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:08:05 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/20 16:45:59 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = 48;
	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n3 < 57 || n2 < 56 || n1 < 55)
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
