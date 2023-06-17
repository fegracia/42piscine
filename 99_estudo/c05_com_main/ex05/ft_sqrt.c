/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:44 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 15:59:36 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i <= nb) && (i < 46341))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
    int num = 16;
    int result = ft_sqrt(num);
    if (result)
    {
        printf("A raiz quadrada de  %d eh %d\n", num, result);
    }
    else
    {
        printf("%d não tem raiz quadrada\n", num);
    }

    num = 25;
    result = ft_sqrt(num);
    if (result)
    {
        printf("A raiz quadrada de  %d eh %d\n", num, result);
    }
    else
    {
        printf("%d não tem raiz quadrada\n", num);
    }

    num = 2;
    result = ft_sqrt(num);
    if (result)
    {
        printf("A raiz quadrada de  %d eh %d\n", num, result);
    }
    else
    {
        printf("%d não tem raiz quadrada\n", num);
    }

    num = -1;
    result = ft_sqrt(num);
    if (result)
    {
        printf("A raiz quadrada de  %d eh %d\n", num, result);
    }
    else
    {
        printf("%d não tem raiz quadrada\n", num);
    }

    return (0);
}