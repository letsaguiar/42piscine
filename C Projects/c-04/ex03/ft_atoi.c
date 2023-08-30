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
	if (
		c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
	)
		return (1);
	else
		return (0);
}

int	ft_validate_space(char *str, int i)
{
	if (!str[i - 1] || ft_isspace(str[i - 1]))
		return (1);
	else
		return (0);
}

int	ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_validate_sign(char *str, int i)
{
	if (!str[i - 1] || ft_isspace(str[i - 1]) || ft_issign(str[i - 1]))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_counter;
	int	result;

	minus_counter = 0;
	result = 0;
	i = -1;
	while (str[++i])
	{
		if (ft_isspace(str[i]) && ft_validate_space(str, i))
			continue ;
		if (str[i] == '+' && ft_validate_sign(str, i))
			continue ;
		if (str[i] == '-' && ft_validate_sign(str, i))
			minus_counter++;
		else if (str[i] >= 48 && str[i] <= 57)
			result = result * 10 + str[i] - 48;
		else
			break ;
	}
	if (minus_counter % 2 == 1)
		result *= -1;
	return (result);
}
