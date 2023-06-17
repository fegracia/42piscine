/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 21:55:10 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

//***************//
// MAIN Function //
//***************//

int	main(void)
{
	char src[100] = "Vai, Curinthia!";
	char dest[100];
	unsigned int size;
	size = 4;
	unsigned int copiados = ft_strlcpy(dest, src, size);
	printf("%u caracters copiados de \"%s\" para \"%s\"\n", copiados, src, dest);
	return (0);
}
