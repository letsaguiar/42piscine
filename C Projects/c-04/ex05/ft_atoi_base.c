/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 00:11:45 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/15 00:47:14 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	int	i;
	int	current_digit;
	int	digits_map[127];

	i = 0;
	while (base[i])
	{
		current_digit = base[i];
		if (current_digit == 43 || current_digit == 45)
			return (0);
		if (!digits_map[current_digit])
			digits_map[current_digit] = 1;
		else
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_validate_character(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_r(char *str, int base, char *digits, int result)
{
	if (ft_validate_character(*str, digits) >= 0)
	{
		result = (result * base) + ft_validate_character(*str, digits);
		return (ft_atoi_base_r(++str, base, digits, result));
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus_counter;
	int	result;

	i = 0;
	while (
		str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r'
	)
		i++;
	minus_counter = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_counter++;
		i++;
	}
	result = ft_atoi_base_r(&str[i], ft_strlen(base), base, 0);
	if (minus_counter % 2 == 1)
		result *= -1;
	return (result);
}
