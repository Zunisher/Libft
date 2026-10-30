/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:12:10 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/12 15:12:34 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}
