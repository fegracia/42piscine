/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:51 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/18 02:01:38 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

//***************//
// MAIN Function //
//***************//

int	main(void)
{
	char str[] = "Renato augusto melhor meia do mundo!";
	printf("String original: %s\n", str);
	ft_strupcase(str);
	printf("String em MAIÚSCULA: %s\n", str);
	return (0);
}
