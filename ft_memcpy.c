/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:08:01 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:08:02 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;
	size_t				i;

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
