/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 13:33:15 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 11:19:38 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_total(int argc, char **argv)
{
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	len += argc - 1;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*ret;
	int		len;

	len = ft_len_total(argc, argv);
	ret = (char*)malloc(sizeof(*ret) * len);
	i = 0;
	j = 0;
	while (argv[++j])
	{
		k = 0;
		while (argv[j][k])
		{
			ret[i] = argv[j][k];
			i++;
			k++;
		}
		if (argv[j + 1])
			ret[i] = '\n';
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
