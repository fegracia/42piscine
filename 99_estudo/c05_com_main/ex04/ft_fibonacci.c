/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:41 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 15:38:07 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main()
{
    int index;
    int result;

    // Exemplo1: index = 0
    index = 0;
    result = ft_fibonacci(index);
    printf("ft_fibonacci(%d) = %d\n", index, result);

    // Exemplo2: index = 1
    index = 1;
    result = ft_fibonacci(index);
    printf("ft_fibonacci(%d) = %d\n", index, result);

    // Exemplo3: index = 5
    index = 5;
    result = ft_fibonacci(index);
    printf("ft_fibonacci(%d) = %d\n", index, result);

    // Exemplo4: index = 10
    index = 10;
    result = ft_fibonacci(index);
    printf("ft_fibonacci(%d) = %d\n", index, result);

    // Exemplo5: index = -1
    index = -1;
    result = ft_fibonacci(index);
    printf("ft_fibonacci(%d) = %d\n", index, result);

    return 0;
}