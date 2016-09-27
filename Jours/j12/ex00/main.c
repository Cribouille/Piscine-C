/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 10:41:42 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 15:32:36 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		ret;

	if (ac == 1)
		ft_puterr("File name missing.\n");
	else if (ac > 2)
		ft_puterr("Too many arguments.\n");
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_puterr("Open() failed.\n");
			return (1);
		}
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, BUFF_SIZE);
		}
		if (close(fd) == -1)
		{
			ft_puterr("Close() failed.\n");
			return (1);
		} 
	}
	return (0);
}
