/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:39:46 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/18 09:21:53 by yabaadi          ###   ########.fr       */
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
/*
#include <fcntl.h>
#include <limits.h>
int main()
{
	int fd = open("test.txt", O_RDWR);
	if (fd == -1)
		return (fd);
	ft_putnbr_fd(INT_MIN, fd);
	ft_putchar_fd('\n', fd);
	close(fd);
}
*/
