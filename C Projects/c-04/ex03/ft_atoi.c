/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:26:13 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/29 10:58:47 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (
		c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
	);
}

int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_counter;
	int	result;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	minus_counter = 0;
	while (ft_issign(str[i]))
	{
		if (str[i] == '-')
			minus_counter++;
		i++;
	}
	result = 0;
	while (ft_isnumeric(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (minus_counter % 2 == 1)
		result *= -1;
	return (result);
}
