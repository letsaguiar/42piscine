/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-agui <lde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:51:39 by lde-agui          #+#    #+#             */
/*   Updated: 2023/08/28 13:42:03 by lde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!to_find[j])
			break ;
		else if (str[i] == to_find[j] && j == 0)
		{
			result = &str[i];
			j++;
		}
		else if (str[i] == to_find[j] && j != 0)
			j++;
		else
		{
			result = 0;
			j = 0;
		}
		i++;
	}
	return (result);
}
