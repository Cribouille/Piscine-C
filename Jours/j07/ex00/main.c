/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:14:49 by efichot           #+#    #+#             */
/*   Updated: 2016/09/07 11:21:08 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	if (argc)
	{
		ft_putstr(ft_strdup(argv[1]));
	}
	return (0);
}
