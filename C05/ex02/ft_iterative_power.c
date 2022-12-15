/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:00:37 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/14 17:09:37 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
	return (0);
}
*/
