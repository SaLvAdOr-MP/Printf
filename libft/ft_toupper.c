/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:15:42 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/28 14:32:35 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	char str[] = "nbhFGGFVbb&&HHb";
// 	int i = 0;

// 	while (str[i])
// 	{
// 		printf("%c", ft_toupper(str[i]));
// 		i++;
// 	}
// 	return (0);
// }
