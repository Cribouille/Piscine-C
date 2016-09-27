/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 15:40:24 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 19:30:08 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_error(char *av)
{
	if (errno == EACCES)
	{
		ft_puterr("cat: ");
		ft_puterr(av);
		ft_puterr(": Permission denied\n");
		return (1);
	}
	else if (errno == EISDIR)
	{
		ft_puterr("cat: ");
		ft_puterr(av);
		ft_puterr(": Is a directory\n");
		return (1);
	}
	else if (errno == ENOENT)
	{
		ft_puterr("cat: ");
		ft_puterr(av);
		ft_puterr(": No such file or directory\n");
		return (1);
	}
	ft_puterr("Open() failed.\n");
	return (0);
}

int		ft_stdin(char *buf)
{
	int		ret;

	while ((ret = read(0, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, BUFF_SIZE);
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		ret;
	int		i;

	i = 0;
	if (ac == 1)
		return (ft_stdin(buf));
	else if (ac >= 2)
	{
		while (++i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				return (ft_error(av[i]));
			while ((ret = read(fd, buf, BUFF_SIZE)))
			{
				buf[ret] = '\0';
				write(1, buf, BUFF_SIZE);
			}
			if (close(fd) == -1)
				ft_puterr("Close() failed.\n");
		}
	}
	return (0);
}
