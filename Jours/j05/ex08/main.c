/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:22:00 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 15:26:32 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

void	ft_putstr(char *str);

int		main(void)
{
	char	str[8] = "Etienne";

	ft_putstr(ft_strupcase(str));
	return (0);
}
