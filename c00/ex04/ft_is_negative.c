/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:02:18 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/05 12:28:11 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	result = 'P';
	if (n < 0)
	{
		result = 'N';
	}
	write(1, &result, 1);
}

// int main()
// {
//     ft_is_negative(-123);
//     return 0;
// }
