/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:52:12 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/12 17:31:05 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	if (n < i)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			diff = 0;
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{		
			return (1);
		}
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)

{
	char *a = "kosi";
	char *b = "riz";

	int x;
	x = ft_strncmp(a, b, 4);

	
	a = "ghid";
	b = "jiwd";
	printf("for n=4 compare %s and %s = %d \n", a, b, x);
	a = "abce";
	b = "abcf";
	x = ft_strncmp(a, b, 3);
	printf("for n=3 compare %s and %s = %d \n", a, b, x);
	a = "";
	b = "CDAB";
	x = ft_strncmp(a, b, 3);
	printf("for n=3 compare %s and %s = %d \n", a, b, x);
	a = "__Z";
	b = "";
	x = ft_strncmp(a, b, 0);
	printf("for n=0 compare %s and %s = %d \n", a, b, x);
	return (0);
}
*/
