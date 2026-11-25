/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:04:36 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/28 10:35:22 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextn;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		nextn = current->next;
		del(current->content);
		free(current);
		current = nextn;
	}
	*lst = NULL;
}
