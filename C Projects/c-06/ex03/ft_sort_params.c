/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leticia-aguiar <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 08:11:06 by leticia-aguia     #+#    #+#             */
/*   Updated: 2023/09/15 08:26:49 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_print_params(char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		ft_putstr(args[i]);
		ft_putstr("\n");
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **args, int size)
{
	int		i;
	int		j;
	char	*k;

	i = 1;
	while (i < size)
	{
		k = args[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(args[j], k) == 1)
		{
			args[j + 1] = args[j];
			j--;
		}
		args[j + 1] = k;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(&argv[1], argc - 1);
		ft_print_params(argv);
	}
	return (0);
}
