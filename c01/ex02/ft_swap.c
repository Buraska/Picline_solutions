/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 14:43:34 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	bb;

	bb = *b;
	*b = *a;
	*a = bb;
}

// int main(){
//     int a = 52;
//     int b = 53;

//     ft_swap(&a, &b);
//     write(1, &a, 1);
//     write(1, &b, 1);
//     write(1, "\n", 1);
// }
