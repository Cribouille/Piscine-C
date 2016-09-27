/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:32:05 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 15:42:38 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strlowcase(char *str);

int		main(void)
{
	char	str[8] = "etiENNe";
	
	ft_putstr(ft_strlowcase(str));
	return (0);
}
