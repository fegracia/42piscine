/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:44:41 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 12:51:19 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

////////////////////////////////////////////////
// ***********	MAIN FUNCTION  *************  //
////////////////////////////////////////////////

int	main(void)
{
 	char	src[5];
 	char	dest[10];
 	int		i;

 	src[0] = 's';
	src[1] = 'o';
	src[2] = 'l';
	src[3] = '\0';
	dest[0] = 'b';
	dest[1] = 'o';
	dest[2] = 'm';
	dest[3] = '\0';
	printf("original = %s\n", strcat(dest, src));
	ft_strcat(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
