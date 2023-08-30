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
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

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

int	ft_char_is_separator(char c)
{
	if (
		!ft_char_is_numeric(c)
		&& !ft_char_is_uppercase(c)
		&& !ft_char_is_lowercase(c)
	)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]) && j == 0)
			str[i] -= 32;
		else if (ft_char_is_uppercase(str[i]) && j != 0)
			str[i] += 32;
		if (ft_char_is_separator(str[i]))
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}
