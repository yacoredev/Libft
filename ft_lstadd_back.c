/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:05:46 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:05:49 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
