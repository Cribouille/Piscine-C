/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:44:49 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 15:36:52 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	int		i;
	int		len;

	len = 0;
	while (to_find[len])
		len++;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == len - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
