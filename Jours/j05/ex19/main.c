/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 20:35:57 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 20:43:18 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_putnbr(int nbr);

int		main()
{
	char str[] = "Etienne";
	char str1[] = "president";	

	ft_putnbr(ft_strlcpy(str, str1, 4));
	return (0);
}
