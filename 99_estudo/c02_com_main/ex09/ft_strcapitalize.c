/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:45:37 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/18 14:31:16 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		space;

	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			space = 0;
		if (c >= '0' && c <= '9')
			space = 0;
		if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

//***************//
// MAIN Function //
//***************//

int main(void)
{
	//char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str[] = "";

	printf("Antes: %s\n", str);
	ft_strcapitalize(str);
	printf("Depois: %s\n", str);

	return 0;
}


