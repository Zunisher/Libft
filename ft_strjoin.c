/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:20:33 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 18:57:09 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ns;
	size_t		i;
	size_t		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	ns = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ns == NULL)
		return (NULL);
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}
