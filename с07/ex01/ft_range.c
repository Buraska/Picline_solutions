/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 17:14:42 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*int_array;

	if (min >= max)
		return (NULL);
	size = max - min;
	int_array = malloc(size * sizeof(int));
	if (!int_array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		int_array[i] = min + i;
		i ++;
	}
	return (int_array);
}

/*
int main()
{
    int i = 0;
    int max = 32;
    int min = 25;
    int *array = ft_range(min, max);
    while (i < max - min)
    {
        i ++;
        printf("%d\n", *array);
        array ++;
    }  
}
*/
