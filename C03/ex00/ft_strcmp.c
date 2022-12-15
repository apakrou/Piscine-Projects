/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:14:02 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/12 17:16:23 by apakrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "XYZ";
	char	*s2 = "xyz";
	int result;

	result = strcmp(s1, s2);
	printf ("result for main function is: %d \n", result);
	printf ("result with prototype function is: %d \n", ft_strcmp(s1, s2));
	return (0);
}
*/
