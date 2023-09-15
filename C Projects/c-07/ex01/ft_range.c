/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:25:30 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/15 09:30:04 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	len = max - min;
	range = malloc(len * sizeof (int));
	i = 0;
	while (i < len)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
