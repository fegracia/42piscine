/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:45:55 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/22 16:27:34 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	int	prime_found;

	prime_found = 0;
	if (nb < 2)
	{
		return (2);
	}
	while (nb <= 2147483647 && !prime_found)
	{
		if (ft_is_prime(nb) == 1)
		{
			prime_found = 1;
			return (nb);
		}
		nb++;
	}
	return (0);
}
