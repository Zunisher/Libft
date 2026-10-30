/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:51:23 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 19:02:30 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_checker(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checker(s1[end - 1], set))
		end--;
	str = malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
