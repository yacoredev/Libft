/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:06:47 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:06:48 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	next_node = NULL;
	while (*lst)
	{
		del((*lst)->content);
		next_node = (*lst)->next;
		free(*lst);
		*lst = next_node;
	}
}
