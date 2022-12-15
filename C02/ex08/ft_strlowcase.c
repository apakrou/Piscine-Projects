/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:21:38 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/10 11:22:11 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	z[] = "QWERTY";
	char	*pal = ft_strlowcase(z);

	printf("Converting Done! =>[%s]\n", pal);

	return(0);
}
*/
