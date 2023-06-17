/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:45 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 19:38:37 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
	printf("Str1: \"ABZ\": %i\n", ft_str_is_uppercase("ABZ"));
	printf("Str2: \"AB@\": %i\n", ft_str_is_uppercase("AB@"));
	printf("Str3: \"AB[\": %i\n", ft_str_is_uppercase("AB["));
	printf("Str4: \"\": %i\n", ft_str_is_uppercase(""));
	printf("Str5: \"DASFJET..\": %i\n", ft_str_is_uppercase("ADASFJET.."));
}
