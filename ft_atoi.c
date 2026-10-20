/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:44:01 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/19 15:26:13 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_underflow(unsigned long nbr, int digit)
{
	return (nbr > (((unsigned long)LONG_MAX + 1) - digit) / 10);
}

static int	check_overflow(unsigned long nbr, int digit)
{
	return (nbr > (LONG_MAX - digit) / 10);
}

int	ft_atoi(const char *nptr)
{
	unsigned long	nbr;
	int	sign;
	
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}

	nbr = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (sign == -1 && check_underflow(nbr, *nptr - '0'))
			return (0);
		if (check_overflow(nbr, *nptr - '0'))
			return (-1);
		nbr = nbr * 10 + *nptr - '0';
		nptr++;
	}
	return ((int)(nbr * sign));
}
/*
#include <string.h>
#include <stdio.h>
int main(int c, char **v)
{
	(void)c;
	
	printf("ft_atoi: %d\n", ft_atoi(v[1]));
	printf("atoi: %d\n", atoi(v[1]));
}
*/
