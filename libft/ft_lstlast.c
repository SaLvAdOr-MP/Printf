/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:25:07 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/16 15:40:14 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list	*Head = ft_lstnew("Hello");
	t_list	*a = ft_lstnew("World");
	t_list	*b = ft_lstnew("!");
	
	ft_lstadd_front(&b, a);
	ft_lstadd_front(&b, Head);
	printf("last content: %s, address: %p, next: %p\n",
			(char *)Head->next->next->content, (void *)Head->next->next,
			(void *)Head->next->next->next);
	printf("Last content: %s, address: %p, next: %p\n",
			(char *)ft_lstlast(b)->content, (void *)ft_lstlast(b),
			(void *)ft_lstlast(b)->next);
}
*/