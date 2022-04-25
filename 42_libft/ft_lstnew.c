/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:56:12 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/04 11:38:45 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_element;

	new_element = ft_calloc(1, sizeof(t_list));
	if (!new_element)
	{
		free(new_element);
		return (NULL);
	}
	new_element->content = content;
	new_element->index = 0;
	new_element->next = NULL;
	return (new_element);
}
