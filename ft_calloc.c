/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:44:09 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/15 09:44:10 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	nbr_bytes;

	if (size == 0
		|| nmemb == 0
		|| nmemb > (size_t) - 1 / size)
		nbr_bytes = 1;
	else
		nbr_bytes = nmemb * size;

	ptr = malloc(nbr_bytes);
	if (!ptr)
		return (NULL);

	ft_bzero(ptr, nbr_bytes);
	return (ptr);
}
/*
     why do we use (size_t)-1?
	- size_t is an unsigned integer type.
	- When we convert -1 to size_t, it becomes the maximum value that size_t can store.
	- This works automatically on both 32-bit and 64-bit systems.
	Example:
		(size_t)-1  // equivalent to SIZE_MAX
	
	Here we can't hardcode the max_size bucase compiler read value before type castin
*//*
#include <stdio.h>
int	main()
{	
	void  *ptr = ft_calloc(1212, sizeof(int));
	free(ptr);
}
*/
