/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:51:47 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/14 14:57:17 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	char			*result;

	result = NULL;
	j = 0;
	i = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j] && j == 0)
		{
			result = &str[i];
			j++;
		}
		else if (str[i] == to_find[j])
			j++;
		else
		{
			result = NULL;
			j = 0;
		}
		i++;
	}
	return (result);
}
