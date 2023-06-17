/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 04:36:00 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/09 04:37:58 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			ft_putchar (' ');
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			if (a != 98)
				write (1, ", ", 2);
		++b;
		}
	++a;
	}
}
