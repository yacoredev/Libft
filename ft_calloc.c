/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:03:38 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/26 11:03:39 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	nbr_bytes;

	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	if (size == 0 || nmemb == 0)
		nbr_bytes = 1;
	else
		nbr_bytes = nmemb * size;
	ptr = malloc(nbr_bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nbr_bytes);
	return (ptr);
}