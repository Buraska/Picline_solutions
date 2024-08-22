/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 17:09:13 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new_string;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	new_string = malloc(len + 1);
	if (!new_string)
		return (NULL);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*
int main()
{
    char test[10] = "abcdef";
    test[5] = 'a';
    printf("%s", ft_strdup("hiasda"));
}
*/
