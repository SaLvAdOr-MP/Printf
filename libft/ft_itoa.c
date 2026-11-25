/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:21:28 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/11 19:03:22 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, char *str, int j)
{
	int long	n;

	n = nb;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if ((n / 10) != 0)
		ft_putnbr(n / 10, str, j - 1);
	str[j] = ((n % 10) + '0');
}

char	*ft_itoa(int n)
{
	int		m;
	long	nb;
	char	*str;

	nb = n;
	m = 0;
	if (n < 0)
	{
		nb *= -1;
		m++;
	}
	while ((nb / 10) != 0)
	{
		nb = nb / 10;
		m++;
	}
	str = malloc(sizeof(*str) * (m + 2));
	if (!str)
		return (NULL);
	ft_putnbr(n, str, m);
	str[m + 1] = '\0';
	return (str);
}

/*
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}
*/
