/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 15:01:27 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	copy_last;

	i = 0;
	while (i < size / 2)
	{
		copy_last = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = copy_last;
		i++;
	}
}

// int main(){
//     int i_array[] = {0, 1, 2, 3, 4, 5};
//     char test_int;

//     ft_rev_int_tab(i_array, 6);

//     int i = 0;
//     while (i < 6)
//     {
//         test_int = i_array[i] + '0';
//         write(1, &test_int, 1);
//         i++;
//     }
// }
