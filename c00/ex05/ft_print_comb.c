/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:02:18 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/05 12:21:37 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	assign_array(char *input_array)
{
	input_array[0] = '0';
	input_array[1] = '0';
	input_array[2] = '0';
}

int	write_number(char *num, int f_run)
{
	if (num[1] != num[0] && num[2] != num[0] && num[1] != num[2])
	{
		if (num[0] < num[1] && num[1] < num[2])
		{
			if (!f_run)
			{
				write(1, ", ", 2);
			}
			write(1, num, 3);
			return (1);
		}
	}
	return (0);
}

void	ft_print_comb(void)
{	
	char	f_run;
	char	num[3];

	f_run = 1;
	assign_array(num);
	while (num[0] != 58)
	{
		while (num[1] != 58)
		{
			while (num[2] != 58)
			{
				if (write_number(num, f_run))
				{
					f_run = 0;
				}
				num[2]++;
			}
			num[1]++;
			num[2] = num[1];
		}
		num[0]++;
		num[1] = num[0];
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
