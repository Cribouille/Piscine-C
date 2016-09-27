/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:33:32 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 18:49:13 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	str[6] = "qwedaa";
	char	str1[7] = "qw65I";
	char	str2[7] = "";
	
	ft_putnbr(ft_str_is_alpha(str));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha(str1));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha(str2));
	return (0);
}
