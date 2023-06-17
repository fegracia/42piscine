/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:02 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 14:52:25 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (result);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
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
    result = ft_iterative_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    // teste com numb = 3 e power = 3
    numb = 3;
    power = 3;
    result = ft_iterative_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    // teste com numb = 4 e power = -2
    numb = 4;
    power = -2;
    result = ft_iterative_power(numb, power);
    printf("%d^%d = %d\n", numb, power, result);

    return 0;
}

