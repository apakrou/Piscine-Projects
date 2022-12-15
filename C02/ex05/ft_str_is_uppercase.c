/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:12:58 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/08 15:00:58 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char riz;

	riz = ft_str_is_uppercase("ASDFG");
	printf("Print 1 if uppercase only: [%d]\n", riz);
	riz = ft_str_is_uppercase("asdfg");
	printf("Print 0 if not uppercase: [%d]\n", riz);
	riz = ft_str_is_uppercase("!^#$#");
	printf("Print 0 if not uppercase: [%d]\n", riz);
	return (0);
}
*/
