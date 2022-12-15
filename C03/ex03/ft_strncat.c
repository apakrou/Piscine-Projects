/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:48:47 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/13 10:49:03 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && nb > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[99] = "furniture";
	char	*b = "smelly";

	printf("Hopeful result: %s \n", ft_strncat(a, b, 4));
	return (0);
}
*/
