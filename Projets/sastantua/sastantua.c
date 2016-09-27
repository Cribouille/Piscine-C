/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 21:50:33 by efichot           #+#    #+#             */
/*   Updated: 2016/09/04 15:57:03 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		build_base(int i)
{		
	if (i == 0)
		return (7);
	return (build_base(i - 1) + 2 *((4 + i) + ((i % 2) + (i / 2))));
}

void	build_floor(int y, int x, int totalbase, int size)
{
	int		ix;
	int		iy;
	int 	door_size;
	int		door_start;

	iy = 0;
	door_size = size - 1;
	if (size % 2)
	{
		door_size++;
	}
	door_start = (totalbase - door_size) / 2;
	while (iy < y)
	{
		ix = -totalbase;
		while (ix < y - 1 - iy)
		{
			ft_putchar(' ');
			ix++;
		}
		ix += y + 1 - iy;
		ft_putchar('/');
		while (ix < x)
		{
			ft_putchar('*');
			ix++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		iy++;
	}
}

void	sastantua(int size)
{
	int		i;
	int		y;
	int		x;
	int		totalbase;

	i = 0;
	while (i < size)
	{
		totalbase = (build_base(size - 1) - build_base(i)) / 2;
		y = 3 + i;
		x = build_base(i);
		build_floor(y, x, totalbase, size);
		i++;
	}
}
