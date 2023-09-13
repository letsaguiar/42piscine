/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:46:36 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/23 10:28:44 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_char_is_separator(char c)
{
	return (
		!ft_char_is_numeric(c)
		&& !ft_char_is_uppercase(c)
		&& !ft_char_is_lowercase(c)
	);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
			if (i == 0 || ft_char_is_separator(str[i - 1]))
				str[i] -= 32;
		i++;
	}
	return (str);
}
