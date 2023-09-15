/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:24:17 by lde-agui          #+#    #+#             */
/*   Updated: 2023/09/15 08:24:06 by leticia-aguia    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_rev_params(char **args, int size)
{
	while (size - 1 > 0)
	{
		ft_putstr(args[size - 1]);
		ft_putstr("\n");
		size--;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_rev_params(argv, argc);
	return (0);
}
