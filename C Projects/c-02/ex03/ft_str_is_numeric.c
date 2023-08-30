/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:17:12 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/22 17:22:34 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_numeric(str[i]))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
