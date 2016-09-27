/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 21:50:50 by efichot           #+#    #+#             */
/*   Updated: 2016/09/10 21:54:55 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (s1[0] == s2[0] && s1[0] != '\0' && s2[0] != '\0')
	{
		return (1 + match(s1 + 1, s2 + 1));
	}
	if ((s1[0] != '*' && s1[0] != '\0' && s2[0] == '*') ||
		(s1[0] == '*' && s2[0] != '*' && s2[0] != '\0'))
	{
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	}
	if (s1[0] == '\0' && s2[0] == '*')
	{
		return (match(s1, s2 + 1));
	}
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	return (0);
	}
}
