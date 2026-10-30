/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <hechahbo@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:50:54 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/19 16:28:02 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_size(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int				i;
	char			nbr[11];
	unsigned int	res;

	if (n < 0)
	{
		write (fd, "-", 1);
		res = (unsigned int)(-n);
	}
	else
		res = n;
	i = ft_size(res);
	nbr[i--] = '\0';
	while (i >= 0)
	{
		nbr[i] = res % 10 + '0';
		res = res / 10;
		i--;
	}
	write (fd, nbr, ft_strlen(nbr));
}
