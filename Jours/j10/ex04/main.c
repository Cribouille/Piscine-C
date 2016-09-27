/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:33:49 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 15:41:40 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*));

int		len_min_7(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	if (len >= 7)
		return (1);
	return (0);
}


void	ft_putnbr(int nb);

int		main()
{
	char		*tab[9] = {"etiee", "hello", "ccou", 0};	

	ft_putnbr(ft_count_if(tab, &len_min_7));
	return (0);
}
