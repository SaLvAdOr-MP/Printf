/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:10:44 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/11 18:39:25 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[] = "kasdhfgcbru";

// 	write (1, str, 11);
// 	write (1, "\n", 1);
// 	// printf("%.12s\n", str);
// 	ft_bzero(str, 10);
// 	write (1, str, 11);
// 	// printf("%.12s\n", str);
// 	return (0);
// }
