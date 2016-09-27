/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:51:00 by efichot           #+#    #+#             */
/*   Updated: 2016/09/07 11:26:12 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;
	int		i;

	len = 0;
	while (src[len])
		len++;
	ret = (char*)malloc(sizeof(*ret) * (len + 1));
	i = 0;
	if (ret)
	{
		while (src[i])
		{
			ret[i] = src[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (0);
}
