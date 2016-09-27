/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:59:36 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 19:04:12 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char	str[7] = "154103";
	char	str1[7] = "154da3";
	char	str2[7] = "";

	ft_putnbr(ft_str_is_numeric(str));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(str1));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(str2));
	return (0);
}
