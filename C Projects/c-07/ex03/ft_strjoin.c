/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:48:50 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/15 10:01:45 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strjoin_size(int size, char **strs, char *sep)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	result += ft_strlen(sep) * (size - 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	int		k;
	char	*result;

	len = ft_strjoin_size(size, strs, sep);
	result = malloc((len + 1) * sizeof (char));
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	return (result);
}
