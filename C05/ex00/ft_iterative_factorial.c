/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:03:44 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/14 17:07:59 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	printf("The factorial result is: %d\n", ft_iterative_factorial(7));
	printf("The factorial result is: %d\n", ft_iterative_factorial(-1));
	printf("The factorial result is: %d\n", ft_iterative_factorial(0));
	printf("The factorial result is: %d\n", ft_iterative_factorial(13));
	return (0);
}
*/
