/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:44:39 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 12:49:27 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

////////////////////////////////////////////////
// ***********	MAIN FUNCTION  *************  //
////////////////////////////////////////////////

int	main(void)
{
	char			*s1;
 	char			*s2;
 	unsigned int	n;

 	s1 = "AB";
 	s2 = "abcadef";
 	n = 2;
 	printf("%d", strncmp(s1, s2, n));
 	printf("\n%d", ft_strncmp(s1, s2, n));
 	return (0);
}
