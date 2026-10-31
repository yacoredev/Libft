/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:08:10 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:08:11 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*byte_src;
	unsigned char		*byte_dst;
	size_t				i;

	if (dest == src)
		return (dest);
	byte_src = (const unsigned char *)src;
	byte_dst = (unsigned char *)dest;
	if ((dest > src) && n)
	{
		i = 0;
		byte_dst += n - 1;
		byte_src += n - 1;
		while (i < n)
		{
			*byte_dst-- = *byte_src--;
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
