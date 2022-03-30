/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:29:41 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 09:38:00 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **list)
{
	ft_rotate_down(list);
	ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_list **list)
{
	ft_rotate_down(list);
	ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	ft_rotate_down(list_a);
	ft_rotate_down(list_b);
	ft_putendl_fd("rrr", 1);
}
