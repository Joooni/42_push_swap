/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:40:45 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/15 10:49:12 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*current;

	if (lst == NULL)
		return ;
	current = lst;
	while (1)
	{
		(*f)(current->content);
		current = current->next;
		if (current == NULL)
			return ;
	}
	return ;
}
