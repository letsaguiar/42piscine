/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:20 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/22 17:15:40 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_uppercase(str[i]) && !ft_char_is_lowercase(str[i]))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
