/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:00:11 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 16:02:01 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int current_i;
	int is_find;

	current_i = 0;
	while (current_i < length)
	{
		i = 0;
		is_find = 0;
		while (i < length)
		{
			if (i != current_i)
				if (tab[i] == tab[current_i])
				{
					is_find = 1;
					break ;
				}
			i++;
		}
		if (!is_find)
			return (tab[current_i]);
		current_i++;
	}
	return (tab[current_i]);
}
