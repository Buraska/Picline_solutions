/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 17:01:08 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*int_array;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	int_array = malloc(size * sizeof(int));
	if (!int_array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		int_array[i] = i + min;
		i++;
	}
	*range = int_array;
	return (size);
}

// int main()
// {
//     int **range;
//     int min = 10;
//     int max = 20;
//     ft_ultimate_range(range, min, max);

//     int i = 0;
//     while (i < (max - min))
//     {
//         printf("%d\n", (*range)[i]);
//         i ++;
//     }  
// }
