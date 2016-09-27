/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:57:23 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 20:23:39 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		lend;
	int		lens;
	int		total_len;
	int		i;

	i = 0;
	lend = 0;
	lens = 0;
	while (dest[lend])
		lend++;
	while (src[lens])
		lens++;
	total_len = lend + lens;
	while (i < size && src[i])
	{
		dest[lend] = src[i];
		lend++;
		i++;
	}
	dest[lend] = '\0';
	return (total_len);
}
