/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:04:05 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 11:33:41 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_comp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	tmp;

	tmp = **s1;
	**s1 = **s2;
	**s2 = tmp;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1])
	{
		if (str_comp(tab[i], tab[i + 1]))
		{
			ft_swap(&tab[i], &tab[i]);
			i = 0;
		}
		i++;
	}
}
