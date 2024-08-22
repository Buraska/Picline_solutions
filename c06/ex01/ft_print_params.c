/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:35:49 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/14 16:52:12 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		return (0);
	}
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argv++;
	}
}

// &*argv[i]
