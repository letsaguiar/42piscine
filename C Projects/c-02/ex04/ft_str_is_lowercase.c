/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:24:42 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/22 17:26:10 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_lowercase(str[i]))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
