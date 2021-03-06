/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 10:56:15 by efichot           #+#    #+#             */
/*   Updated: 2016/09/11 18:25:50 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_sudoku(char **tab);
int		check_sudoku_is_valid(char **tab, int argc);
int		check_line(char **tab, char nb, int x);
int		check_column(char **tab, char nb, int x);
int		check_block(char **tab, int x, int y, char nb);
int		resolve_sudoku(char **tab, int position);
int		find_best_line(char **argv);


#endif
