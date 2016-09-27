/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:08:40 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 15:26:59 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_a(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr(int nb);

int		ft_any(char **tab, int(*f)(char*));

int		main()
{
	char	*tab[9] = {"hello", "Etienne", 0};

	ft_putnbr(ft_any(tab, &find_a));
	return (0);
}
