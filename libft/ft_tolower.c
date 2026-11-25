/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:23:03 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/28 14:32:29 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	char str[] = "nbhFGGFVbb&&HHb";
// 	int i = 0;

// 	while (str[i])
// 	{
// 		printf("%c", ft_tolower(str[i]));
// 		i++;
// 	}
// 	return (0);
// }
