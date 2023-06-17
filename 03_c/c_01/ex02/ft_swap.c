/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:49:01 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 23:34:06 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
