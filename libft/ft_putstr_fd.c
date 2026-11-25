/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:22:47 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/09 22:08:24 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	l;

	l = ft_strlen(s);
	write(fd, s, l);
}

/*
int	main(int ac, char const **av)
{
	if (ac != 2)
	return (0);
	ft_putstr_fd("Hello", ft_atoi(av[1]));
	return (0);
}
*/
