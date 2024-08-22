/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:35:49 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/18 14:18:08 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

char	**get_min_p(char *argv[], int size)
{
	char	**min;
	int		i;

	min = argv;
	i = 0;
	while (i < size)
	{
		if (ft_strcmp(*argv, *min) < 0)
		{
			min = argv;
		}
		argv++;
		i++;
	}
	return (min);
}

void	sort_by_isc11(char *array[], int size)
{
	char	**min_p;
	char	*current;
	int		ind;

	ind = 0;
	while (ind < size)
	{
		min_p = get_min_p(array + ind, size - ind);
		if (ft_strcmp(array[ind], *min_p) > 0)
		{
			current = array[ind];
			array[ind] = *min_p;
			*min_p = current;
		}
		ind++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		return (0);
	}
	argv++;
	sort_by_isc11(argv, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
