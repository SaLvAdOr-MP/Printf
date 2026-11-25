/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:28:51 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/28 11:28:51 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
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
// 	ft_memset(str, 'K', 10);
// 	write (1, str, 11);
// 	// printf("%.12s\n", str);
// 	return (0);
// }
