/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:01:21 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 14:35:12 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	str[8] = "Etienne";
	char	str2[6] = "Tinou";
	ft_putstr(ft_strcpy(str2, str));
	return (0);
}
