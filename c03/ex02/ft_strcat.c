/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 13:28:50 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_array_size(char *array)
{
	int	i;

	i = 0;
	while (*array != '\0')
	{
		i++;
		array++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = get_array_size(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int main(){
//     char c[100] = "abcde";
//     char *c1 = "QWERTY";
//     printf("%s", ft_strcat(c, c1));
// }
