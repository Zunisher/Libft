/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:24:08 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/21 21:24:09 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
/*
static void	ft_remover(void *node)
{
	size_t	n;
	size_t	i;
	char *str;

	if (!node)
		return ;
	str = (char *)node;
	i = 0;
	n = 0;
	while(str[i])
		i++;
	while (n < i)
	{
		str[n] = '0';
		n++;
	}
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
