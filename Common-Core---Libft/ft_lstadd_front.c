/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:08:51 by sallawne          #+#    #+#             */
/*   Updated: 2026/11/02 09:34:27 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
int	main()
{
		char *s1 = "Ahmad";
		char *s2 = "omar";
		char *s = "khaled";

		t_list *node1 = ft_lstnew(s1);
		t_list *node2 = ft_lstnew(s2);
		t_list *Newnode = ft_lstnew(s);
		t_list *head = node1;


		node1->next = node2;
		ft_lstadd_front(&head, Newnode);
		printf("%s\n", Newnode->content);
		printf("%s\n", head->content);
		printf("%s\n", node1->content);



}

