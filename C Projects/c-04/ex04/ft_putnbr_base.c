/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:47:22 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/15 00:09:50 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	int	i;
	int	current_digit;
	int	digits_map[127];

	i = 0;
	while (base[i])
	{
		current_digit = base[i];
		if (current_digit == 43 || current_digit == 45)
			return (0);
		if (!digits_map[current_digit])
			digits_map[current_digit] = 1;
		else
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base_r(long nbr, int base, char *digits)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base)
	{
		ft_putnbr_base_r(nbr / base, base, digits);
		nbr = nbr % base;
	}
	ft_putchar(digits[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_validate_base(base))
		ft_putnbr_base_r(nbr, ft_strlen(base), base);
}
