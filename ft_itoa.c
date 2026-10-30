/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:48:07 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/24 18:56:48 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size_nbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				size;
	char			*nbr;
	int				min;
	unsigned int	num;

	min = 0;
	num = n;
	if (n < 0)
	{
		min = 1;
		num = -n;
	}
	size = ft_size_nbr(num);
	nbr = malloc((size + min + 1) * sizeof(char));
	if (nbr == NULL)
		return (NULL);
	nbr[size + min] = '\0';
	while (size > 0)
	{
		nbr[--size + min] = num % 10 + '0';
		num = num / 10;
	}
	if (min == 1)
		nbr[0] = '-';
	return (nbr);
}
