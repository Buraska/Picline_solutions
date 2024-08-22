/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar  vzolotar@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:59:32 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 19:27:33 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if (!(96 < str && str < 123))
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	char	i;
	char	*start;

	start = str;
	i = 'a' - 'A';
	while (*str)
	{
		if (ft_str_is_alpha(*str))
		{
			*str = *str - i;
		}
		str++;
	}
	return (start);
}

/*
int main()
{
    char c[] = "coz u are my dearest friend";
    printf("%s", ft_strupcase(c));
}
*/
