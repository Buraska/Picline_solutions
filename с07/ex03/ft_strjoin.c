/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 17:35:25 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		x;
	int		char_total;

	if (size <= 0)
		return ((char *) malloc(0));
	x = 0;
	char_total = (ft_strlen(sep) * (size - 1));
	while (x < size)
	{
		char_total += ft_strlen(strs[x]);
		x++;
	}
	result = malloc(char_total + 1);
	x = 0;
	while (x < size)
	{
		ft_strcat(result, strs[x]);
		if (x < size - 1)
			ft_strcat(result, sep);
		x++;
	}
	result[char_total + 1] = '\0';
	return (result);
}

/*
int main()
{
    char *str[] = {"yjt000jt", "asda", "hi"};
    char* c = (ft_strjoin(3, str, ", ="));

    int i = 0;
    printf("%s", c);
}
*/
