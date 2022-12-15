/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:49:06 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/06 10:35:02 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)

{	
	int	new_spot;

	new_spot = *a;
		*a = *b;
		*b = new_spot;
}
/*
int	main(void)
{
	int	a;
	int b;
	int *pntr1;
	int *pntr2;

	a = 2;
	b = 7;

	ft_swap(pntr1, pntr2)
	printf("%d, %d", a, b);
	return (0);
}
*/
