/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:45:59 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/12 15:46:01 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (i < n && str[i])
	{
		j = 0;
		while (i + j < n && str[i + j] == find[j])
		{
			j++;
			if (find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
