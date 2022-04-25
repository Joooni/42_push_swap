/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:23:35 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/25 17:05:32 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_sa(t_list **list)
{
	ft_swap(list);
	ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list **list)
{
	ft_swap(list);
	ft_putendl_fd("sb", 1);
}

void	ft_ss(t_list **list_a, t_list **list_b)
{
	ft_swap(list_a);
	ft_swap(list_b);
	ft_putendl_fd("ss", 1);
}

// push first element of b to a
void	ft_pa(t_list **list_a, t_list **list_b)
{
	ft_push(list_b, list_a);
	ft_putendl_fd("pa", 1);
}

// push first element of a to b
void	ft_pb(t_list **list_a, t_list **list_b)
{
	ft_push(list_a, list_b);
	ft_putendl_fd("pb", 1);
}
