/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 13:35:28 by efichot           #+#    #+#             */
/*   Updated: 2016/09/18 20:30:10 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	ft_print_line(char left, char center, char right, int x)
{
	int	index;

	index = 0;
	while (index < x)
	{
		if (index == 0)
			ft_putchar(left);
		else if (index < (x - 1))
			ft_putchar(center);
		else
			ft_putchar(right);
		index++;
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_print_line('A', 'B', 'A', x);
		else if (i < (y - 1))
			ft_print_line('B', ' ', 'B', x);
		else
			ft_print_line('C', 'B', 'C', x);
		i++;
	}
}
