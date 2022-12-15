/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:53:36 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/14 17:11:14 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	d;
	long	c;

	if (nb < 1)
	{
		return (0);
	}
	c = 1;
	d = nb;
	while (c * c < d)
	{
		c++;
	}
	if (c * c == d)
	{
		return (c);
	}
	return (0);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int a;

	a = 64;
	printf("Number = %d, Square root = %d\n", a, ft_sqrt(a));
	return (0);
}
*/
