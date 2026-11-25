/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:27:29 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/16 15:39:55 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*Head = ft_lstnew("World");
	t_list	*new = ft_lstnew("Hello");
	printf("Head cont: %s, next: %p\n",
			(char *)Head->content, (void *)Head->next);
	printf("New cont: %s, next: %p\n",
			(char *)new->content, (void *)new->next);
	ft_lstadd_front(&Head, new);
	printf("Head cont: %s, next: %p\n",
			(char *)Head->content, (void *)Head->next);
	printf("New cont: %s, next: %p\n",
			(char *)Head->next->content, (void *)Head->next->next);
}
*/