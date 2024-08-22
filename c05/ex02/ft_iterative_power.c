/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:15:11 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/12 18:58:51 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}

// int main()
// {
//     printf("%d", ft_iterative_power(0, 0));
//     printf("%d", ft_iterative_power(1, 0));
//     printf("%d", ft_iterative_power(13, 0));
// }
