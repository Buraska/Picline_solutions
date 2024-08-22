/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:15:11 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/12 19:07:23 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root <= nb)
	{
		if (root * root == nb)
		{
			return (root);
		}
		root ++;
	}
	return (0);
}

// int main()
// {
//     printf("%d", ft_sqrt(-25));
// }
