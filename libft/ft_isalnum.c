/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:44:24 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/27 12:57:24 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char str[] = "Abv9870[>>92T";
// 	int i = 0;

// 	while (str[i])
// 	{
// 		printf("%d\n", ft_isalnum(str[i]));
// 		i++;
// 	}
// 	return (0);
// }
