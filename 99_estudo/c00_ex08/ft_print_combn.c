/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 04:46:14 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/09 16:03:32 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_combn(int n)
{
	int	a;
	int	b;

	a = '0';
	b = '0';
	
	if (n < 10)
	a = n;
	ft_putchar('0' + n);
	//while (a <= n)
	//{
	//	a = b + 1;
	//	ft_putchar(a + '0');
	//	ft_putchar(a + '0');
	//	ft_putchar(b + '0');
				//if (a != '7' || b != '8' || c != '9')
				//	write (1, ", ", 2);
	a++;
}



int main()
{
    ft_print_combn(4);
    return 0;
}
