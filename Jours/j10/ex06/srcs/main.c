/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:17:59 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 23:33:16 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_print_sol(char **argv, t_fptr *tabf)
{
	if (argv[2][0] == '+')
		ft_putnbr(tabf[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(tabf[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(tabf[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(tabf[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (argv[2][0] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(tabf[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else
		ft_putchar('0');
}

int		main(int argc, char **argv)
{
	t_fptr	tabf[5];

	tabf[0] = &add;
	tabf[1] = &sous;
	tabf[2] = &mul;
	tabf[3] = &div;
	tabf[4] = &mod;
	if (argc == 4 && ft_strlen(argv[2]) == 1)
	{
		ft_print_sol(argv, tabf);
		ft_putchar('\n');
	}
	return (0);
}
