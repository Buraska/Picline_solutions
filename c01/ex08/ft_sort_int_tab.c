/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 15:04:56 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_index_of_min(int *array, int start_ind, int size)
{
	int	i;
	int	min_value_ind;

	i = start_ind;
	min_value_ind = start_ind;
	while (i < size)
	{
		if (array[i] < array[min_value_ind])
		{
			min_value_ind = i;
		}
		i++;
	}
	return (min_value_ind);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	copy;
	int	min_ind;

	i = 0;
	while (i < size)
	{
		min_ind = get_index_of_min(tab, i, size);
		copy = tab[i];
		tab[i] = tab[min_ind];
		tab[min_ind] = copy;
		i++;
	}
}

// int main(){
//     int array_size = 5;
//     int array[] = {8, 3, 6, 7, 1};
//     char test_int;

//     ft_sort_int_tab(array, array_size);

//     int i = 0;
//     while (i < 5)
//     {
//         test_int = array[i] + '0';
//         write(1, &test_int, 1);
//         i++;        
//     }
// }
