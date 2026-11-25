/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:44:20 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/03 14:56:07 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*str;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = -1;
	if (dst > str)
	{
		while (n > 0)
		{
			dst[n - 1] = str[n - 1];
			n--;
		}
	}
	if (dst < str)
	{
		while (++i < n)
			dst[i] = str[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "game";
// 	char dst[] = "aaaa";

// 	write (1, dst, 5);
// 	write (1, "\n", 1);
// 	// printf("%s\n", str);
// 	ft_memmove(dst, src, 4);
// 	write (1, dst, 5);
// 	// printf("%s\n", str);
// 	return (0);
// }
