/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:52:15 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/12 13:08:25 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	t_list	*Head = ft_lstnew("Hello");
	t_list	*b = ft_lstnew("!");

	ft_lstadd_front(&b, ft_lstnew("world"));
	ft_lstadd_front(&b, Head);
	printf("Size of list: %d\n", ft_lstsize(b));
}
*/