/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:53:40 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/08 14:57:08 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sweaty(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (ft_sweaty(str[a]) == 1)
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

	riz = ft_str_is_alpha("ASSet");
	printf("Give 1 if all are letters: [%d]\n", riz);
	riz = ft_str_is_alpha("c7cfy1");
	printf("Give 0 if other character present: [%d]\n", riz);
	riz = ft_str_is_alpha("yummy");
	printf("Give 1 if all are letters: [%d]\n", riz);
	return (0);
}
*/
