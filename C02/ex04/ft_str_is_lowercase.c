/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:52:19 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/08 15:00:16 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
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
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char riz;

	riz = ft_str_is_lowercase("asdfg");
	printf("Print 1 if only lowercase: [%d]\n", riz);
	riz = ft_str_is_lowercase("ASDFG");
	printf("Print 0 if Uppercase: [%d]\n", riz);
	riz = ft_str_is_lowercase("~@#$%67");
	printf("Print if other chars: [%d]\n", riz);
	return (0);
}
*/
