/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:43 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 19:38:37 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
	printf("Str1: \"abz\": %i\n", ft_str_is_lowercase(" AAz"));
	printf("Str2: \"ab{\": %i\n", ft_str_is_lowercase("ab{"));
	printf("Str3: \"ab`\": %i\n", ft_str_is_lowercase("testamento"));
	printf("Str4: \"\": %i\n", ft_str_is_lowercase(""));
	printf("Str5: \"asdasda..\": %i\n", ft_str_is_lowercase("asdasda.."));
	printf("Str6: \"asdasAa\": %i\n", ft_str_is_lowercase("asdasAa"));
}
