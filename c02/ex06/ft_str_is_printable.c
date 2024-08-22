/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar  vzolotar@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:59:32 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 15:29:45 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
    printf("%d", ft_str_is_printable( 155 + "sdasdawdd"));
    printf("%d", ft_str_is_printable("ASDASD"));
}
*/
