/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:49:01 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/14 17:10:26 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb *= ft_recursive_power(nb, power -1));
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("The value of the power applied is: %d\n", ft_recursive_power(3, 5 ));
}
*/
