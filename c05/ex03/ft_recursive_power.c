/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:15:11 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/17 19:57:08 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main()
// {
//     printf("%d", ft_recursive_power(1, 0));
//     printf("%d", ft_recursive_power(-1, 6));
// }
