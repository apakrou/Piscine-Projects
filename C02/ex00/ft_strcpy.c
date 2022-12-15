/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:31:27 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/08 13:14:13 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char s2[] = "testing";
	char s1[] = "hellooooo";
	ft_strcpy(s1, s2);
	write (1, &s1, strlen(s1));	
	return (0);	
}
*/
