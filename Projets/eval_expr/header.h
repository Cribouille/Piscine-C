/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoulzac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:07:35 by ltoulzac          #+#    #+#             */
/*   Updated: 2016/09/18 20:51:05 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# define BUFF_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_put_colle(char *name, int x, int y, int *ent);
void	ft_calculate_coordo(char *str);
void	ft_cmp_colles(int x, int y, char *str);
char	*geanerate_line (int x, char *colle, char *pat, int line);
char	*generate_colle(int x, int y, char *pat);
char	*colle00_0(int x, int y);
char	*colle00_1(int x, int y);
char	*colle00_2(int x, int y);
char	*colle00_3(int x, int y);
char	*colle00_4(int x, int y);

#endif
