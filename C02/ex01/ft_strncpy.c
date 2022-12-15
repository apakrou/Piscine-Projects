/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:51:47 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/10 12:34:21 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	s2[] = "jamarcus";
   	char	s1[] = "sweaty";

	printf("%s\n", s2);
	ft_strncpy (s1, s2, 4);
	printf("%s\n", s1);
	return (0);
}

