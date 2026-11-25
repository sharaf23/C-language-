/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:25:16 by sallawne          #+#    #+#             */
/*   Updated: 2026/11/01 13:39:40 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_back(t_list *lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (lst == NULL)
	{
		lst = new;
		return ;
	}
	last = ft_lstlast(lst);
	last->next = new;
}

	int main(void)
{
    t_list  *a;
    t_list  *b;
    int     x;
    int     y;

    x = 1;
    y = 10;
    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));

    a->content = &x;
    a->next = NULL;
    b->content = &y;
    b->next = NULL;

    ft_lstadd_back(a, b);
    printf("%d\n", *(int *)a->next->content);
    free(a);
    free(b);
    return (0);
}

