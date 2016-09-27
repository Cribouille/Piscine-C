/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoulzac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:09:03 by ltoulzac          #+#    #+#             */
/*   Updated: 2016/09/18 19:50:14 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*generate_line(int x, char *colle, char *pattern, int line)
{
	int		ix;

	ix = 0;
	while (ix < x)
	{
		if (ix == 0)
			*colle = pattern[line];
		else if ((ix + 1) == x)
			*colle = pattern[line + 2];
		else
			*colle = pattern[line + 1];
		colle++;
		ix++;
	}
	*colle = '\n';
	colle++;
	return (colle);
}

char	*generate_colle(int x, int y, char *pattern)
{
	char	*colle;
	char	*ret;
	int		iy;
	int		line;

	iy = 0;
	colle = (char *)malloc(sizeof(char) * (x + 1) * y);
	ret = colle;
	while (iy < y)
	{
		if (iy == 0)
			line = 0;
		else if ((iy + 1) == y)
			line = 6;
		else
			line = 3;
		colle = generate_line(x, colle, pattern, line);
		iy++;
	}
	*colle = '\0';
	return (ret);
}
