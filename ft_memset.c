/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:45:35 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/13 11:51:04 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_byte;
	size_t		i;

	ptr_byte = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr_byte[i++] = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "helloworld";
	char *ns = ft_memset(str, '*', 5);

	printf("%s", ns);
}
*/
