/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:31:12 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 19:30:34 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	str[] = "Eti";
	char	str2[] = "Tinouyr";
	ft_putstr(ft_strncpy(str, str2, 4));
	ft_putstr(strncpy(str, str2, 4));
	return (0);
}
