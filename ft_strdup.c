/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:43:29 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:09:19 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*tmp;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	tmp = str;
	while (*s)
		*tmp++ = *s++;
	*tmp = '\0';
	return (str);
}
