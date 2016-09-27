/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:16:19 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 19:28:25 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char	str[7] = "NIAFIA";
	char	str1[7] = "FAWFyu";
	char	str2[7] = "GAWGt9";
	char	str3[7] = "";

	ft_putnbr(ft_str_is_uppercase(str));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(str1));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(str2));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(str3));
	return (0);
}
