/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:41 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 18:01:45 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			++str;
		else
			return (0);
	}
	return (1);
}

//**************//
// Função MAIN  //
//**************//

int	main(void)
{
	printf("Str1: \"123\": %i\n", ft_str_is_numeric("123"));
	printf("Str2: \"\": %i\n", ft_str_is_numeric(""));
	printf("Str3: \"1234567a89\": %i\n", ft_str_is_numeric("1234567curinthia89"));
}
