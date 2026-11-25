/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:14:22 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/03 14:07:45 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*str;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "game";
// 	char dst[] = "aaaa";

// 	write (1, dst, 5);
// 	write (1, "\n", 1);
// 	// printf("%.12s\n", str);
// 	ft_memcpy(dst, src, 4);
// 	write (1, dst, 5);
// 	// printf("%.12s\n", str);
// 	return (0);
// }
