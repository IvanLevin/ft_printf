/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:21:49 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/31 15:29:31 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	ft_find_smallest(int *arr, int j, int size)
{
	int		smallest_index;
	int		smallest;
	int		i;

	i = 0;
	smallest = arr[j];
	smallest_index = j;
	while (j < size)
	{
		if (smallest > arr[j])
		{
			smallest = arr[j];
			smallest_index = j;
		}
		j++;
	}
	return (smallest_index);
}

int			*ft_selection_sort(int *arr)
{
	int		i;
	int		sw;
	int		size;
	int		*new_arr;
	int		smallest;

	i = 0;
	sw = 0;
	size = 0;
	smallest = 0;
	while (arr[size])
		size++;
	if (!(new_arr = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	while (i < size)
	{
		smallest = ft_find_smallest(arr, i, size);
		new_arr[i] = arr[smallest];
		sw = arr[smallest];
		arr[smallest] = arr[i];
		arr[i] = sw;
		i++;
	}
	return (new_arr);
}
