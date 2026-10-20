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
	size_t		i;

	ptr_byte = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr_byte[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	*//*
	char str[] = "helloworld";
	ft_bzero(str, 5);
	*//*
	
	char str[10] = "uopouopuo";
	bzero(str, 11);
	// ft_bzero(str, 11);
	write (1, str, 10);
	
	//printf("%s\n", str);
	//printf("%s\n", &str[5]);
}
*/
