/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:29:29 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 08:46:30 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next_element;

	if (!lst)
		return ;
	next_element = (*lst);
	while (*lst)
	{
		next_element = (*lst)->next;
		free(*lst);
		(*lst) = next_element;
	}
}
