/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 15:23:50 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 11:13:20 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
