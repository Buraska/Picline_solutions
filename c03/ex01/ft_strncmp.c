/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:58:27 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/15 16:11:06 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 1;
	while (*s1 != '\0' && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

// int main(int argc, char const *argv[])
// {
// 	#include <stdio.h>
// 	#include <string.h>
//     printf("%d", ft_strncmp("z", "va", 1));
//     printf("%d", strncmp("z", "za", 0));
//     printf("%d", strncmp("z", "va", 0));
//     printf("%d", strncmp("v", "za", 1));
//     return 0;
// }
