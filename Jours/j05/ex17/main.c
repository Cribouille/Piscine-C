/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 20:09:04 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 19:37:38 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char str[] = "eti";
	char str1[] = "enne";

	ft_putstr(ft_strncat(str, str1, 8));
	return (0);
}
