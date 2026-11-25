/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:41:36 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/16 15:45:48 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (comp(s1[i], set) != 0)
		i++;
	j = ft_strlen(s1);
	while (j > 0 && comp(s1[j - 1], set) != 0)
		j--;
	str = ft_substr(s1, i, (j - i));
	return (str);
}

// int	main(void)
// {
// 	char *str = "xxx?hello?x??";
// 	// char *set = "xx?";

// 	printf("%s", ft_strtrim(str, NULL));
// }
