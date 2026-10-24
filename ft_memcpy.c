/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:06:05 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/13 15:34:59 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;
	size_t		i;

	ptr_src = (const unsigned char *)src;
	ptr_dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*ptr_dst++ = *ptr_src++;
		i++;
	}
	return (dest);
}
