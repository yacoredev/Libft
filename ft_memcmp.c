/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:07:45 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:07:46 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;
	size_t				i;

	if (!n || s1 == s2)
		return (0);
	byte_s1 = (unsigned char *)s1;
	byte_s2 = (const unsigned char *)s2;
	i = 1;
	while (*byte_s1 == *byte_s2 && i < n)
	{
		byte_s1++;
		byte_s2++;
		i++;
	}
	return (*byte_s1 - *byte_s2);
}
