/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:32:15 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/25 17:05:47 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	ft_max_bits(int size);

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	size = ft_lstsize(*stack_a);
	max_bits = ft_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL && (*stack_b)->index != 0)
			ft_pa(stack_a, stack_b);
		i++;
	}
}

static int	ft_max_bits(int size)
{
	int	max_bits;
	int	max_num;

	max_bits = 0;
	max_num = size;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
