/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:49:27 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/28 10:27:39 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

// int	main(void)
// {
// 	char str[] = "this is a very long string, blahh blahh 42";
// 	char str1[] = {'a', ' ', 127, '\n', '\0'};

// 	printf ("%5zu\n", ft_strlen(str1));
// 	return (0);
// }
