/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:24:29 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/23 18:55:24 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	*ft_remover(void *node)
{
	size_t	n;
	char	*str;

	if (!node)
		return (NULL);
	str = ft_strdup((char *)node);
	if (!str)
		return (NULL);
	n = 0;
	while (str[n])
	{
		str[n] = '0';
		n++;
	}
	return (str);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;
	t_list	*ncontent;

	nlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		ncontent = f(lst->content);
		nnode = ft_lstnew(ncontent);
		if (!nnode)
		{
			del(ncontent);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
