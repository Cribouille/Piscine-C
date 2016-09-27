/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 17:01:15 by efichot           #+#    #+#             */
/*   Updated: 2016/08/31 18:34:40 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ad_print_space(void);

void	ad_print_numbers(char i, char j, char k);

void	ft_print(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	ft_print_coma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					ft_print_coma_space();
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
