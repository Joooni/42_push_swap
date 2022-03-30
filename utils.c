/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:55:06 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 12:12:21 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_process(char *s)
{
	ft_putendl_fd(s, 2);
	exit(1);
}

int	ft_is_sorted(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next != NULL)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_checkdup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				end_process("Error");
			j++;
		}
		i++;
	}
	return ;
}

char	**ft_split_and_fill(int *argc, char **argv)
{
	char	**lst;
	int		i;

	i = 0;
	*argc = ft_split_count_words(argv[1], ' ') + 1;
	lst = ft_split(argv[1], ' ');
	while (i < *argc)
	{
		argv[i + 1] = lst[i];
		i++;
	}
	return (argv);
}
