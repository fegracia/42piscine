/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:09:50 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 12:48:20 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

////////////////////////////////////////////////
// ***********	MAIN FUNCTION  *************  //
////////////////////////////////////////////////

int	main(void)
{
	char palavra1[50] = {"Hello"};
	char palavra2[50] = {"hello"};
	int retorno = 0;

	printf("Diff  minha função: %d", ft_strcmp("Hello", "hello1"));
	retorno = strcmp(palavra1, palavra2);
	printf("\nDiff função nativa: %i", retorno);

	return (0);
}
