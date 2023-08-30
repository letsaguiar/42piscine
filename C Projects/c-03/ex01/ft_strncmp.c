/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:17:53 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/28 13:32:28 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!s1[i] && !s2[i])
			break ;
		else if (!s1[i] || s1[i] < s2[i])
			return (-1);
		else if (!s2[i] || s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
