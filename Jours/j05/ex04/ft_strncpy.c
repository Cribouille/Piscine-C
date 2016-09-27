/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:20:52 by efichot           #+#    #+#             */
/*   Updated: 2016/09/05 11:42:52 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	while (n != 0)
	{
		if (i > len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
