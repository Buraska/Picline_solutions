/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:02:18 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/05 15:56:38 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{	
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				write(1, " ", 1);
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}

// int main()
// {
//     ft_print_comb2();
//    
//     return 0;
// }
