/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:57:14 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/08 18:18:13 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	cpt;

	cpt = 0;
	if (s)
	{
		while (s[cpt])
		{
			s[cpt] = '\0';
			cpt++;
		}
	}
}
