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
	int	i;

	i = 0;
	while (i <= nb / 2)
	{
		if (ft_pow(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}
