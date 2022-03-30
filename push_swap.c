/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:56:59 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/28 13:45:51 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_initialize_stack(int argc, char **argv, t_list **stack);
static void	ft_assign_index(int argc, t_list **stack, int **array);
static void	ft_create_stacks(t_list **stack_a, t_list **stack_b, char **argv);

int	pushswap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*array;

	if (argc < 2)
		end_process("(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ Wrong Input ✧ﾟ･: *ヽ(◕ヮ◕ヽ)");
	if (argc == 2)
		argv = ft_split_and_fill(&argc, argv);
	ft_checkdup(argc, argv);
	array = presort(argc, argv);
	ft_create_stacks(&stack_a, &stack_b, argv);
	ft_initialize_stack(argc, argv, &stack_a);
	ft_assign_index(argc, &stack_a, &array);
	if (ft_is_sorted(stack_a) == 1)
		exit(0);
	if (argc - 1 < 6)
		small_sort(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	exit(0);
}

static void	ft_initialize_stack(int argc, char **argv, t_list **stack)
{
	int		i;
	t_list	*tmp;

	i = 2;
	while (i < argc)
	{
		tmp = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, tmp);
		i++;
	}
}

static void	ft_assign_index(int argc, t_list **stack, int **array)
{
	int		i;
	t_list	*tmp;

	tmp = *stack;
	while ((*stack) != NULL)
	{
		i = 0;
		while (i < argc)
		{
			if ((*stack)->content == (*array)[i])
			{
				(*stack)->index = i + 1;
				break ;
			}
			i++;
		}
		*stack = (*stack)->next;
	}
	*stack = tmp;
}

static void	ft_create_stacks(t_list **stack_a, t_list **stack_b, char **argv)
{
	*stack_a = ft_lstnew(ft_atoi(argv[1]));
	*stack_b = ft_lstnew(0);
	(*stack_b)->index = 0;
	if (!stack_a || !stack_b)
	{
		free(stack_a);
		free(stack_b);
		end_process("Error");
	}
}
