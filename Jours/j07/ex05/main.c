/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:05:56 by efichot           #+#    #+#             */
/*   Updated: 2016/09/07 21:12:40 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_words_tables(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	ft_print_words_tables(ft_split_whitespaces("  coucou c'est encore	moi		connard	 "));
	return (0);
}
