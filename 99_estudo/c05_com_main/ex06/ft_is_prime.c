/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:47 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 16:04:47 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    int num, isPrime;

    printf("Entre com um número: ");
    scanf("%d", &num);

    isPrime = ft_is_prime(num);

    if (isPrime == 1)
    {
        printf("%d eh primo.\n", num);
    }
    else
    {
        printf("%d não é primo.\n", num);
    }

    return 0;
}