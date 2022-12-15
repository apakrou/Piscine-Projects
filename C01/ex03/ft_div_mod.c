/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:14:20 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/06 10:46:00 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pntrdiv;
	int *pntrmod;

	a = 10;
	b = 5;
	pntrdiv = &div;
	pntrmod = &mod;
	ft_div_mod(a, b, pntrdiv, pntrmod);
	printf("div %d, mod %d", div, mod);
	return (0);
}*/
