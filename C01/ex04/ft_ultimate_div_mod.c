/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:19:44 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/06 14:22:31 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int x;
	int y;
	int *a;
	int	*b;

	x = 48;
	y = 5;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
}*/
