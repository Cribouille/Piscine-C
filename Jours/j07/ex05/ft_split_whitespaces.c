/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:36:36 by efichot           #+#    #+#             */
/*   Updated: 2016/09/07 20:40:46 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_create_tab(char *str, int nb_word, int max_len_word)
{
	char	**tab;
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	tab = (char**)malloc(sizeof(*tab) * nb_word + 1);
	while (str[k])
	{
		tab[i] = (char*)malloc(sizeof(**tab) * max_len_word + 1);
		j = 0;
		while ((str[k] == ' ' || str[k] == '\t' || str[k] == '\n') && str[k])
			k++;
		while (str[k] != ' ' && str[k] != '\t' && str[k] != '\n' && str[k])
		{
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[nb_word] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		len_word;
	int		nb_word;
	int		max_len_word;
	int		i;

	i = -1;
	nb_word = 0;
	len_word = 0;
	max_len_word = 0;
	while (str[++i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			nb_word++;
			while (str[i] != ' ' && str[i] != '\t' &&
	str[i] != '\n' && str[++i])
				len_word++;
			if (len_word > max_len_word)
				max_len_word = len_word;
			len_word = 0;
		}
	}
	return (ft_create_tab(str, nb_word, max_len_word));
}
