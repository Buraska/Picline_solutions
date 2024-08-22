/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar  vzolotar@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:59:32 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 19:33:00 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_up_case(char str)
{
	if (!(64 < str && str < 91))
	{
		return (0);
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	char	i;
	char	*start;

	start = str;
	i = 'a' - 'A';
	while (*str)
	{
		if (is_up_case(*str))
		{
			*str = *str + i;
		}
		str ++;
	}
	return (start);
}

/*
int main()
{
    char c[] = "cozZZZ u are my dearest friend";
    printf("%s", ft_strlowcase(c));
}
*/
