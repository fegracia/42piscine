/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:38 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 19:38:37 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
			++i;
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
	printf("Str1 é alpha?: %d\n", ft_str_is_alpha("   /   "));
	printf("Str2 é alpha?: %d\n", ft_str_is_alpha("Haha8ha"));
	return (0);
}
