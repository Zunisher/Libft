/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <hechahbo@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:32:08 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/19 22:47:15 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
void	ft_toupper_conv(unsigned int nbr, char *s)
{
	if (nbr % 2 == 0 && (*s >= 'a' && *s <= 'z'))
	{
		*s = *s - 32;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

