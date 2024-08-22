/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar  vzolotar@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:59:32 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/08 15:35:38 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*copy_of_start_dest;

	copy_of_start_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy_of_start_dest);
}

// void main(){
//     char dest[] = "sadawfwewegw";
//     char src[] = "asbds";
//     printf("%s\n", ft_strcpy(dest, src));
// }
