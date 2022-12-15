/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:27:05 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/08 14:58:29 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
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
	char lic;

	lic = ft_str_is_numeric("675930");
	printf("Give 1 if all number: [%d]\n", lic);
	lic = ft_str_is_numeric("564f47");
	printf("Give 0 if contains char: [%d]\n", lic);
	lic = ft_str_is_numeric("g34534");
	printf("Give 1 if all number: [%d]\n", lic);
	return(0);
}
*/
