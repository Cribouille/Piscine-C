/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 17:22:56 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 19:00:59 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "QfDs *&% 46 fae f4ae64,re4hz4g 6z4h a j gMhoWs Kw5 &$@qqr81 491ey10y4 4d5wq4e 12e2 @#  qwd Dh  272    NfZwW57LLHbpw TF57nNqe";
	ft_putstr(ft_strcapitalize(str));
	return (0);
}
