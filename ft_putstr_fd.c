/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 07:04:57 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/18 08:14:03 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
int main()
{
	int fd = open("test.txt", O_RDWR);
	if (fd == -1)
		write(1, "Error opening file\n", 19);
	ft_putstr_fd("hello", fd);

	// always close file descriptors when done (Prevent leaks)
	close(fd);
}
*/
