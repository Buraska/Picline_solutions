/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:08:26 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/10 20:47:44 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*remove_spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	return (str);
}

int	get_sign(char *str)
{
	int	sign;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{	
			sign *= -1;
		}
		else if (*str != '+')
		{
			break ;
		}
		str++;
	}
	return (sign);
}

char	*remove_signs(char *str)
{
	int	sign;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	num;
	int	result;
	int	sign;

	str = remove_spaces(str);
	sign = get_sign(str);
	str = remove_signs(str);
	num = *str - '0';
	result = 0;
	while (num >= 0 && num <= 9 && *str != '\0')
	{
		result = (result * 10 + num);
		str ++;
		num = *str - '0';
	}
	return (result * sign);
}

// int main(){
//     printf("%d", ft_atoi(" 		 	 	-++-1234ab567"));
// }
