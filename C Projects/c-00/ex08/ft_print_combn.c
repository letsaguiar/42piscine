/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:35:56 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/12 19:17:43 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*build_first_number(int n, char *numbers)
{
	int	i;

	i = 0;
	while (i < n)
	{
		numbers[i] = i + '0';
		i++;
	}
	while (i < 9)
	{
		numbers[i] = '\0';
		i++;
	}
	return (numbers);
}

int	get_modification_position(int n, char *numbers)
{
	int	i;
	int	j;

	j = 0;
	i = n - 1;
	while (numbers[i] >= '9' - j && i >= 0)
	{
		j++;
		i--;
	}
	return (i);
}

char	*build_next_number(int n, char *numbers)
{
	int	i;

	if (!numbers[0])
		return (build_first_number(n, numbers));
	i = get_modification_position(n, numbers);
	if (i < 0)
		return (NULL);
	else
	{
		numbers[i++] += 1;
		while (i < n)
		{
			numbers[i] = numbers[i - 1] + 1;
			i++;
		}
	}
	return (numbers);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	numbers[10];

	while (build_next_number(n, numbers))
	{
		ft_putstr(numbers);
		if (numbers[0] < '9' - (n - 1))
			ft_putstr(" ");
	}
}
