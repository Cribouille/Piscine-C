/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:40:27 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 19:50:18 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_str_is_printable(char *str);

int		main(void)
{
	char	str[7] = "takeda";

	ft_putnbr(ft_str_is_printable(str));
	return (0);
}
