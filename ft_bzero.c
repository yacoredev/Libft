/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:01:21 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/18 09:41:47 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_byte;
	size_t			i;

	ptr_byte = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr_byte[i++] = 0;
}
