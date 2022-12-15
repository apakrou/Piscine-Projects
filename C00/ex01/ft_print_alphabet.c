/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:19:14 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/09 11:25:46 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lca;

	lca = 'a';
	while (lca <= 'z')
	{
		write(1, &lca, 1);
		lca++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
