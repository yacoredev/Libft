/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:30:26 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:10:55 by yabaadi          ###   ########.fr       */
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
