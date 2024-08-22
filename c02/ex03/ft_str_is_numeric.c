/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar  vzolotar@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:59:32 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/08 16:26:57 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(47 < *str && *str < 58))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(){
//     char str[] = "1953g";
//     printf("%d", ft_str_is_numeric(str));
//}
