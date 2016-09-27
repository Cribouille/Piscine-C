/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 20:09:04 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 20:14:21 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[4] = "eti";
	char str1[5] = "enne";

	ft_putstr(ft_strcat(str, str1));
	return (0);
}
