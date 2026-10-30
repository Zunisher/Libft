/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:23:01 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 19:04:11 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	inword;

	count = 0;
	i = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c && !inword)
		{
			count++;
			inword = 1;
		}
		if (s[i] == c)
			inword = 0;
		i++;
	}
	return (count);
}

static char	*ft_storeword(char const *s, char c, size_t *index)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	i = 0;
	while (s[*index] && s[*index] == c)
		(*index)++;
	while (s[*index + len] && s[*index + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[*index + i];
		i++;
	}
	word[i] = '\0';
	*index += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	index;
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < ft_count_words(s, c))
	{
		str[i] = ft_storeword(s, c, &index);
		if (!str[i])
		{
			while (i > 0)
				free(str[--i]);
			return (free(str), NULL);
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}
