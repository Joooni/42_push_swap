/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:17:50 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 09:21:38 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_list **stack_a, t_list **stack_b)
{
	int	lstsize;

	lstsize = ft_lstsize(*stack_a);
	if (lstsize == 2)
	{
		ft_sa(stack_a);
	}
	else if (lstsize == 3)
		tiny_sort(stack_a);
	else if (lstsize == 4)
	{
		while ((*stack_a)->index != 4)
			ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
		tiny_sort(stack_a);
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a);
	}
	else
		smol_sort(stack_a, stack_b);
}

void	tiny_sort(t_list **stack)
{
	if ((*stack)->index == 3
		&& (*stack)->next->index == 2)
		ft_sa(stack);
	if ((*stack)->index == 2
		&& (*stack)->next->index == 3)
		ft_rra(stack);
	if ((*stack)->index == 1
		&& (*stack)->next->index == 3)
		ft_sa(stack);
	if ((*stack)->index == 3
		&& (*stack)->next->index == 1)
		ft_ra(stack);
	if ((*stack)->index == 2
		&& (*stack)->next->index == 1)
		ft_sa(stack);
}

void	smol_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*stack_a)->index >= 4)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}
	tiny_sort(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		ft_sb(stack_b);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a);
	ft_ra(stack_a);
}
