/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:16:26 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/19 22:43:29 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ss;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (start >= i || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (i - start > len)
		ss = malloc(len + 1);
	else
		ss = malloc(i - start + 1);
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
