/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:28:12 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/25 17:05:27 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_ra(t_list **list)
{
	ft_rotate_up(list);
	ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list **list)
{
	ft_rotate_up(list);
	ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	ft_rotate_up(list_a);
	ft_rotate_up(list_b);
	ft_putendl_fd("rr", 1);
}
