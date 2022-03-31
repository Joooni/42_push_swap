/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:55:06 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/31 13:43:22 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnumeric(char *str);

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

void	ft_checkinput(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		if (ft_isnumeric(argv[i]) == 0)
			ft_end_process("Error");
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_end_process("Error");
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
	if (argv[1] == NULL)
		exit(1);
	return (argv);
}

static int	ft_isnumeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
