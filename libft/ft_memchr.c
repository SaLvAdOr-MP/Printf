/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:26:25 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/30 10:26:32 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "abjshfsvsd";
// 	void	*r;

// 	r = ft_memchr(str, 's', 4);
// 	if (r != NULL)
// 		printf("%s\n", (char *)r);
// 	else
// 		printf("Result is NULL (not found).\n");
// 	return (0);
// }
