/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:30:26 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/26 11:06:13 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	last_occur = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last_occur = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		last_occur = (char *)s;
	return (last_occur);
}
