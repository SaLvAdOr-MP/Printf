/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:10:07 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/16 16:16:42 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	k;

	i = 0;
	n = 0;
	while (i < size && dst[i])
		i++;
	while (src[n])
		n++;
	k = i;
	if (k >= size)
		return (size + n);
	while (i < size - 1 && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (k + n);
}

/*
int	main(void)
{
	char	s1[] = "dfgfghfjh";
	char	s2[] = "qwertyuiop";
	
	printf ("%zu", ft_strlcat(s2, s1, 14));
	printf ("\n%s", s2);
}
*/
