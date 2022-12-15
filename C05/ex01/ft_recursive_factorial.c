/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:48:05 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/14 17:08:39 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_factorial (nb - 1));
	}
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("The factorial result is: %d\n", ft_recursive_factorial(9));
	printf("The factorial result is: %d\n", ft_recursive_factorial(0));
	printf("The factorial result is: %d\n", ft_recursive_factorial(-1));
	printf("The factorial result is: %d\n", ft_recursive_factorial(1));
	return (0);
}
*/
