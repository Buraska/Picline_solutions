/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:08:26 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/11 12:49:52 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	str_contains(char *str, char c)
{
	while (*str)
	{
		if (c == *str)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	is_base_valid(char *base)
{
	int	base_size;

	base_size = 0;
	while (*base)
	{
		if (*base == '-' || *base == '+')
		{
			return (0);
		}
		if (*base < 32 || *base > 126)
		{
			return (0);
		}
		if (str_contains(base + 1, *base))
		{
			return (0);
		}
		base++;
		base_size++;
	}
	return (base_size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	i;
	int	nums[100];

	base_size = is_base_valid(base);
	if (base_size < 2)
	{
		return ;
	}
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr)
	{
		nums[i] = (nbr % base_size);
		nbr /= base_size;
		i++;
	}
	while (i-- > 0)
	{
		write(1, &base[nums[i]], 1);
	}
}

 void main(){
 	write(1, "\n", 1);
     ft_putnbr_base(16, "");
 	write(1, "\n", 1);
     ft_putnbr_base(16, "ab");
 	write(1, "\n", 1);
     ft_putnbr_base(-16, "01");
 	write(1, "\n", 1);
     ft_putnbr_base(-2147483647, "0");
	  	write(1, "\n", 1);
     ft_putnbr_base(-2147483647, "\0\0");
 }
