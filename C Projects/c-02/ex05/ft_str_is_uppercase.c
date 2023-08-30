/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:03 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/22 17:31:01 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_uppercase(str[i]))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
