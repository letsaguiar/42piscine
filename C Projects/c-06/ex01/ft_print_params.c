/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:15:33 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/30 14:20:51 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
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

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv);
	return (0);
}
