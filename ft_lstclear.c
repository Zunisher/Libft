/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hechahbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:51:21 by hechahbo          #+#    #+#             */
/*   Updated: 2026/10/21 19:51:38 by hechahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		nxt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nxt;
	}
}
