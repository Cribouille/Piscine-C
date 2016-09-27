/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 12:31:37 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 15:46:09 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	str[] = "jh3pzbglovezsc143bo9tk6f";
	char    strr[] = "jh3pzbglovezsc143bo9tk6f";
	ft_putstr(ft_strstr(str, strr));
	ft_putchar('\n');
	ft_putstr(ft_strstr("etienne", "ne"));
	ft_putchar('\n');
	ft_putstr(ft_strstr("etienne", "ien"));
	ft_putchar('\n');
	ft_putstr(ft_strstr("etienne", "ti"));
	ft_putchar('\n');
	ft_putstr(ft_strstr("etienne", ""));
	return (0);
}
