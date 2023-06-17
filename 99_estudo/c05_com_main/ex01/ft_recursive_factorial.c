/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:00 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 14:13:48 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

int main()
{
    int	numb;
    int	result;

    // teste com numb = 0
    numb = 0;
    result = ft_recursive_factorial(numb);
    printf("%d! = %d\n", numb, result);

    // teste com numb = 5
    numb = 5;
    result = ft_recursive_factorial(numb);
    printf("%d! = %d\n", numb, result);

    // teste com numb = -3
    numb = -3;
    result = ft_recursive_factorial(numb);
    printf("%d! = %d\n", numb, result);

    return (0);
}
