/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:18:19 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/26 19:30:42 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*myarray;
	size_t	i;

	i = 0;
	if (n != 0 && size > ((size_t)-1 / n))
		return (NULL);
	myarray = malloc(n * size);
	if (myarray == NULL)
		return (NULL);
	while (i < (n * size))
	{
		((char *)myarray)[i] = '\0';
		i++;
	}
	return (myarray);
}
