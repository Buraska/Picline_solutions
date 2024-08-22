/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:15:11 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/12 17:16:23 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 0)
	{
		result *= nb--;
	}
	return (result);
}

// int main() 
// {
//     printf("%d", ft_iterative_factorial(-1));
//     printf("%d", ft_iterative_factorial(3));
// }
