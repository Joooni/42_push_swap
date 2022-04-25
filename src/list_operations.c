/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:46:25 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/25 17:05:35 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

/*
Funcion takes a linked list pointer *list
and swaps the first two elements A->B->C-> so that
the new list is B->A->C->
*/
void	ft_swap(t_list **list)
{
	t_list	*tmp;

	tmp = (*list)->next->next;
	(*list)->next->next = *list;
	*list = (*list)->next;
	(*list)->next->next = tmp;
}

/*
Function takes two linked lists, stack a and b,
and push the top element of stack a to the top of stack b
*/
void	ft_push(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	if (*list_a == NULL)
		return ;
	if ((*list_b)->index == 0)
	{
		(*list_b)->content = (*list_a)->content;
		(*list_b)->index = (*list_a)->index;
		tmp = (*list_a)->next;
		free(*list_a);
		*list_a = tmp;
	}
	else
	{
		tmp = *list_b;
		if ((*list_a)->next == NULL)
		{
			(*list_a)->next = ft_lstnew(0);
			(*list_a)->next->index = 0;
		}
		*list_b = *list_a;
		*list_a = (*list_a)->next;
		(*list_b)->next = tmp;
	}
}

/*
Function takes a linked list and shifts all elements up by one,
with the first element becoming the last
*/
void	ft_rotate_up(t_list **list)
{
	t_list	*tmp;
	t_list	*new_start;

	tmp = *list;
	new_start = (*list)->next;
	*list = (*list)->next;
	tmp->next = NULL;
	ft_lstlast(*list)->next = tmp;
	*list = new_start;
}

/*
Function takes a linked list and shifts all elements down by one,
with the last element n becoming the first
*/
void	ft_rotate_down(t_list **list)
{
	t_list	*tmp;
	t_list	*start_list;

	start_list = *list;
	tmp = ft_lstlast(*list);
	while ((*list)->next->next != NULL)
		(*list) = (*list)->next;
	(*list)->next = NULL;
	tmp->next = start_list;
	*list = tmp;
}
