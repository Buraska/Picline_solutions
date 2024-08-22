/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzolotar vzolotar@student.hive.fi          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:25 by vzolotar          #+#    #+#             */
/*   Updated: 2024/08/22 23:00:16 by vzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define SUCCESS 0
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define EVEN(x) x % 2 == 0

typedef int	t_bool;
#endif
