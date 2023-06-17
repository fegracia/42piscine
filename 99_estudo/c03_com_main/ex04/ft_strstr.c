/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:44:47 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 01:29:10 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			else if (str[i] != to_find[j])
				j = 0;
		}
		else
			i++;
	}
	return (0);
}

////////////////////////////////////////////////
// ***********	MAIN FUNCTION  *************  //
////////////////////////////////////////////////

int	main(void)
{
	char	*str = "fernando";
	char	*to_find = "rn";

	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
