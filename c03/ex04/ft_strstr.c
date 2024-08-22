/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 13:48:09 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] == str[i] || to_find[i] == '\0')
			{
				if (to_find[i] == '\0')
				{
					return (str);
				}
				i++;
			}
		}
		str++;
	}
	return (NULL);
}

// int main(){
//     printf("%s", ft_strstr("--", " asd+"));
//     printf("\n");
//     printf("%s", strstr("++", " asd+"));
// }
