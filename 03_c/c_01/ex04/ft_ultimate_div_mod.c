/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:27:48 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 23:36:56 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / (*b);
	*b = temp % (*b);
}

int main(void)
{
    int x = 10;
    int y = 3;

    printf("Antes da divisão: x = %d, y = %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("Depois da divisão: x = %d, y = %d\n", x, y);
    return 0;
}