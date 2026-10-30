/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:38:41 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 18:55:05 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	if (n == 0)
		return (result);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
