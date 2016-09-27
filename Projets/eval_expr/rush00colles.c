/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00colles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:33:29 by efichot           #+#    #+#             */
/*   Updated: 2016/09/18 19:44:23 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*colle00_0(int x, int y)
{
	char	*pat;
	char	*colle;

	pat = "o-o| |o-o";
	colle = generate_colle(x, y, pat);
	return (colle);
}

char	*colle00_1(int x, int y)
{
	char	*pat;
	char	*colle;

	pat = "/*\\* *\\*/";
	colle = generate_colle(x, y, pat);
	return (colle);
}

char	*colle00_2(int x, int y)
{
	char	*pat;
	char	*colle;

	pat = "ABAB BCBC";
	colle = generate_colle(x, y, pat);
	return (colle);
}

char	*colle00_3(int x, int y)
{
	char	*pat;
	char	*colle;

	pat = "ABCB BABC";
	colle = generate_colle(x, y, pat);
	return (colle);
}

char	*colle00_4(int x, int y)
{
	char	*pat;
	char	*colle;

	pat = "ABCB BCBA";
	colle = generate_colle(x, y, pat);
	return (colle);
}
