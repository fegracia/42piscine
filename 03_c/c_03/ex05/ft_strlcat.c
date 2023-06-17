/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:44:52 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 01:35:17 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_size(char *str)
{
	unsigned int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size++;
	}
	return (str_size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = ft_count_size(dest);
	src_size = ft_count_size(src);
	if (size <= dest_size)
		return (size + src_size);
	else
	{
		i = 0;
		while (src[i] != '\0' && i < size - dest_size - 1)
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
		return (dest_size + src_size);
	}
}
