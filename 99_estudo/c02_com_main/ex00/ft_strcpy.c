/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:37:44 by Oceano            #+#    #+#             */
/*   Updated: 2023/03/18 00:58:45 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

//***************//
// MAIN Function //
//***************//

int main(void)
{
	char src[] = "Vai, Timão!";
	char dest[50];

	ft_strcpy(dest, src);

	printf("String origem: %s\n", src);
	printf("String destino: %s\n", dest);

	return 0;
}
