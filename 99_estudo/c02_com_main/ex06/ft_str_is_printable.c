/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:48 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 22:03:36 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str != 127)
			++str;
		else
			return (0);
	}
	return (1);
}

//***************//
// MAIN Function //
//***************//

int	main(void)
{
	printf("Str1: \"ABZ\": %i\n", ft_str_is_printable(""));
	printf("Str2: \"AB@\": %i\n", ft_str_is_printable("fs\ts"));
	printf("Str3: \"AB[\": %i\n", ft_str_is_printable("AB["));
	printf("Str4: \"\": %i\n", ft_str_is_printable(""));
	printf("Str5: \"DASFJET..\": %i\n", ft_str_is_printable("ADASFJET.."));
}
