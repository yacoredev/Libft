/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:11:13 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/26 11:04:19 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_diglen(int nbr)
{
	int	diglen;

	diglen = 0;
	if (nbr <= 0)
		diglen++;
	while (nbr)
	{
		diglen++;
		nbr /= 10;
	}
	return (diglen);
}

static char	*convert_tostr(char *buff, long nbr, int size)
{
	char	*tmp;
	int		i;

	tmp = buff;
	if (nbr < 0)
	{
		*tmp++ = '-';
		nbr = -nbr;
		size--;
	}
	i = size - 1;
	tmp[i--] = '\0';
	while (i >= 0)
	{
		tmp[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (buff);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_diglen(n) + 1;
	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	return (convert_tostr(str, n, size));
}