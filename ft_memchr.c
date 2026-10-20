/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:54:04 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/14 11:13:18 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*byte;
	size_t			i;

	byte = (const unsigned char *)s;
	i = 0;
        while (i < n)
        {
                if (*byte == (unsigned char)c)
                        return ((void *)byte);
                byte++;
		i++;
        }
        return (NULL);
}
