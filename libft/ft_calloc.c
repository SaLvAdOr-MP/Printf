/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:15:48 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/03 17:39:03 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}

// int	main(void)
// {
// 	printf("%p", ft_calloc(545555555665, 55343434));
// }
