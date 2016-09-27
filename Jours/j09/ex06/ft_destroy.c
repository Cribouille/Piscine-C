/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 14:45:55 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 14:53:35 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j])
		{
			k = 0;
			while (factory[i][j][k])
			{
				free(factory[i][j][k]);
				k++;
			}
			free(factory[i][j]);
			j++;
		}
		free[i];
		i++;
	}
}
