/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:57:28 by jsubel            #+#    #+#             */
/*   Updated: 2022/03/30 11:14:46 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include "libft/libft.h"

// main functions
int		pushswap(int argc, char **argv);
void	ft_swap(t_list **list);
void	ft_push(t_list **list_a, t_list **list_b);
void	ft_rotate_up(t_list **list);
void	ft_rotate_down(t_list **list);

// utility functions
void	end_process(char *s);
void	ft_checkinput(int argc, char **argv);
int		ft_is_sorted(t_list *stack);
char	**ft_split_and_fill(int *argc, char **argv);

// print utility functions
void	ft_print_array(int *array);
void	ft_print_stacks(t_list *list_a, t_list *list_b);

// sorting functions
int		*presort(int argc, char **argv);
void	small_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	tiny_sort(t_list **stack);
void	smol_sort(t_list **stack_a, t_list **stack_b);

// list sorting operations
void	ft_sa(t_list **list);
void	ft_sb(t_list **list);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **list_a, t_list **list_b);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_ra(t_list **list);
void	ft_rb(t_list **list);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_rra(t_list **list);
void	ft_rrb(t_list **list);
void	ft_rrr(t_list **list_a, t_list **list_b);
#endif