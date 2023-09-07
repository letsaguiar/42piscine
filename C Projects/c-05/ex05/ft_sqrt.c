/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:40:54 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/30 10:17:25 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_pow(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb *= -1;
	x = nb;
	y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (ft_pow(x, 2) == nb)
		return (x);
	else
		return (0);
}
