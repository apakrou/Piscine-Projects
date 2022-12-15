/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:36:46 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/05 10:15:14 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	nm;

	nm = '0';
	while (nm <= '9')
	{
		write (1, &nm, 1);
	nm++;
	}
}
/*
int	main(void)
{	
	ft_print_numbers();
	return (0);
}
*/
