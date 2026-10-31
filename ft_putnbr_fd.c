/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:08:45 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/28 19:08:46 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec_putnbr(long nbr, int fd)
{
	if (nbr > 9)
		ft_rec_putnbr(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (nbr == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	ft_rec_putnbr(nbr, fd);
}
