/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:31:47 by smaria-r          #+#    #+#             */
/*   Updated: 2026/10/27 12:56:55 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		if (c > 'Z' && c < 'a')
			return (0);
	}
	else
		return (0);
	return (1);
}

// int	main(void)
// {
// 	char str[] = "AVBS8987[";
// 	int i = 0;

// 	while (str[i])
// 	{
// 		printf("%d\n", ft_isalpha(str[i]));
// 		i++;
// 	}
// 	return (0);
// }
