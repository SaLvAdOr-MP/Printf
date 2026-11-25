/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:34:14 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/10 13:54:02 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if ((nb / 10) != 0)
		ft_putnbr_fd(nb / 10, fd);
	n = ((nb % 10) + '0');
	write (fd, &n, 1);
}

/*
int	main(int ac, char const **av)
{
	if (ac != 2)
	return (0);
	ft_putnbr_fd(-42522452, ft_atoi(av[1]));
	return (0);
}
*/
