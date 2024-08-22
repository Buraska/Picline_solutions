/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 17:01:08 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;
	t_stock_str	stock;
	char		*copy;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock.size = ft_strlen(av[i]);
		stock.str = av[i];
		stock.copy = malloc(stock.size);
		ft_strcpy(stock.copy, stock.str);
		array[i] = stock;
		i++;
	}
	stock.copy = 0;
	stock.str = 0;
	stock.size = 13;
	array[i] = stock;
	return (array);
}

// int main()
// {
//     char *ar[] = {"heelllo", "hi", "privet"};

//     t_stock_str *arr = ft_strs_to_tab(3, ar);
//     ft_show_tab(arr);

//     int i;
// }
