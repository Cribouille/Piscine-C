/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:29:51 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 15:30:26 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int		main()
{
	t_perso		donnie;

	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	(void)donnie;
	return (0);
}
