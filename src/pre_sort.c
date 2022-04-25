/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:04:53 by jsubel            #+#    #+#             */
/*   Updated: 2022/04/25 17:05:40 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	quicksort(int **array, int start, int end);
static void	ft_quickswap(int *v1, int *v2);
static int	ft_divide(int *array, int start, int end, int pivot);

/*
Preparatory sort - create an array from program input
that then gets sorted via quicksort
*/
int	*presort(int argc, char **argv)
{
	int	i;
	int	*array;
	int	len;

	len = argc - 1;
	array = ft_calloc(len, sizeof(int));
	if (!array)
		ft_end_process("Error");
	i = 1;
	while (i < argc)
	{
		array[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	quicksort(&array, 0, len - 1);
	return (array);
}

/*
Recursive sorting algorithm that works on the principle of 
divide and conquer:
* first, divide the unsorted list into two parts, Left (L) and Right (R)
* from the unsorted list, choose a pivot element and sort elements so that
elements < pivot are added to L and elements > pivot are added to R
* quicksort the lists L and R
*/
static void	quicksort(int **array, int start, int end)
{
	int	pivot;

	pivot = end;
	if (start < end)
	{
		pivot = ft_divide(*array, start, end, pivot);
		quicksort(array, start, pivot - 1);
		quicksort(array, pivot + 1, end);
	}
}

/*
Helper function to swap two values in-place
*/
static void	ft_quickswap(int *v1, int *v2)
{
	int	tmp;

	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}

/*
Takes the sublist from array, starting at start, ending at end,
containing the pivot element pivot and initializes two counters,
i and j, with i starting at start and j one step left of the pivot element.
Then find an i < pivot element and j >= pivot element and swap those.
Lastly, if the element at position i > pivot element,
swap that element with the pivot element.
*/
static int	ft_divide(int *array, int start, int end, int pivot)
{
	int	i;
	int	j;
	int	pivot_element;

	i = start;
	j = pivot - 1;
	pivot_element = array[pivot];
	while (i < j)
	{
		while (i < end && array[i] < pivot_element)
			i++;
		while (j > start && array[j] >= pivot_element)
			j--;
		if (i < j)
			ft_quickswap(&array[i], &array[j]);
	}
	if (array[i] > pivot_element)
		ft_quickswap(&array[i], &array[end]);
	return (i);
}
