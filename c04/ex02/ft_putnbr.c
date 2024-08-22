/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:08:26 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/17 13:02:05 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
	{
		ft_putnbr(l / 10);
		l = l % 10;
	}
	if (l < 10)
	{
		ft_putchar(l + '0');
	}
}

// int main(){
//     ft_putnbr(153);
//     ft_putnbr(-2147483647);

// }
