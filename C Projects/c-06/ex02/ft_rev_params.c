/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:24:17 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/30 14:33:37 by lde-agui         ###   ########.fr       */
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

int	ft_count_args(char **args)
{
	unsigned int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

void	ft_print_rev_params(char **args)
{
	unsigned int	i;

	i = ft_count_args(args) - 1;
	while (i > 0)
	{
		ft_putstr(args[i]);
		ft_putstr("\n");
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_rev_params(argv);
	return (0);
}
