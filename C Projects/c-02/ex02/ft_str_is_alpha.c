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
	return (c >= 65 && c <= 90);
}

int	ft_char_is_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_uppercase(str[i]) && !ft_char_is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
