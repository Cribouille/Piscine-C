/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:31:24 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 15:39:00 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>

# define SAVE_AUSTIN_POWERS "rien"

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
