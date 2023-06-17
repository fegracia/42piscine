/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:05 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 15:02:14 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	if (0 < power)
	{
		result = (result * nb) * ft_recursive_power(nb, (power - 1));
	}
	return (result);
}

int main()
{
    int numb;
    int power;
    int result;

    // teste com numb = 2 e power = 0
    numb = 2;
    power = 0;
    result = ft_recursive_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    // teste com numb = 3 e power = 3
    numb = 3;
    power = 3;
    result = ft_recursive_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    // teste com numb = 4 e power = -2
    numb = 4;
    power = -2;
    result = ft_recursive_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    return 0;
}
