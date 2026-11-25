/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:29:49 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/11 18:42:01 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbstr(char const *s, char c)
{
	int	i;
	int	nbstr;

	i = 0;
	nbstr = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nbstr++;
		i++;
	}
	return (nbstr);
}

static void	*sfree(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**wword(char const *s, char c, int i, char **str)
{
	int	sz;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (i)
	{
		while (s[j] == c)
			j++;
		sz = 0;
		while (s[j + sz] != c && s[j + sz])
			sz++;
		str[k] = malloc(sizeof(**str) * (sz + 1));
		if (!str[k])
			return (sfree(str, k));
		ft_strlcpy(str[k], s + j, sz + 1);
		j = j + sz;
		k++;
		i--;
	}
	str[k] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = nbstr(s, c);
	str = malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	return (wword(s, c, i, str));
}

/*
int	main(void)
{
	char **str;
	
	str = ft_split("   ola, tudo bem?   ", ' ');
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
	str = ft_split("ola,_tudo_bem?", ' ');
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
	str = ft_split("", ' ');
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
	return (0);
}
*/
