/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:35:49 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/18 14:18:30 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (0);
	}
	while (**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
	}
	write(1, "\n", 1);
}

// &*argv[i]
