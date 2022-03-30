/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:06:38 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 09:32:22 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_list *list_a, t_list *list_b)
{
	unsigned int	i;
	t_list			*tmp_a;
	t_list			*tmp_b;

	i = 0;
	tmp_a = list_a;
	printf("\n*:･ﾟ✧		Stack A			✧ﾟ･: *\nlstsize: %d \
		\nPos:	Con:	Index:\n", ft_lstsize(list_a));
	while (tmp_a != NULL)
	{
		printf("%u	%d	%d	%p\n", i + 1, tmp_a->content, tmp_a->index, tmp_a);
		i++;
		tmp_a = tmp_a->next;
	}
	i = 0;
	tmp_b = list_b;
	printf("\n*:･ﾟ✧		Stack B			✧ﾟ･: *\nlstsize: %d \
		\nPos:	Con:	Index:\n", ft_lstsize(list_b));
	while (tmp_b != NULL)
	{
		printf("%u	%d	%d	%p\n", i + 1, tmp_b->content, tmp_b->index, tmp_b);
		i++;
		tmp_b = tmp_b->next;
	}
}

void	ft_print_array(int *array)
{
	int	j;

	j = 0;
	while (j < 10)
	{
		printf("		Array[%d]: %d\n", j, array[j]);
		j++;
	}
}
