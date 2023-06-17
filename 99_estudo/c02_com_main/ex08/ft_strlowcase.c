/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:53 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/17 19:40:55 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		++i;
	}
	return (str);
}

//***************//
// MAIN Function //
//***************//

int	main(void)
{
	char str[] = "RENATO AUGUSTO MELHOR MEIA DO MUNDO!";

	printf("String original: %s\n", str);
	ft_strlowcase(str);
	printf("String em minuscula: %s\n", str);
	return (0);
}
