/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 20:26:14 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 22:48:53 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef int		(*t_fptr)(int, int);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int nb, int nb2);
int		sous(int nb, int nb2);
int		mul(int nb, int nb2);
int		div(int nb, int nb2);
int		mod(int nb, int nb2);
void	ft_print_sol(char **argv, t_fptr *tabf);

#endif
