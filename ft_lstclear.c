/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:57:25 by clecat            #+#    #+#             */
/*   Updated: 2021/11/03 15:50:57 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;
	t_list	*temp;

	lst2 = *lst;
	temp = *lst;
	while (lst2 != NULL)
	{
		temp = temp->next;
		(*del)(lst2->content);
		free(lst2);
		lst2 = temp;
	}
	*lst = NULL;
}
