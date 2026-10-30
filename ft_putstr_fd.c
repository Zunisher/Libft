/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <hechahbo@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:21:30 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/17 18:28:47 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
