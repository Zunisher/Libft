/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <hechahbo@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:09:53 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 19:05:42 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_checker(unsigned int nbr, char s)
{
	if (nbr % 2 == 0 && (s >= 'a' && s <= 'z'))
	{
		return (s - 32);
	}
	return (s);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ns;

	if (!s || !f)
		return (NULL);
	ns = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
