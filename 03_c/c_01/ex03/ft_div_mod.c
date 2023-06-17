/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:00 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 23:23:23 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;
    a = 10;
    b = 3;

    ft_div_mod(a, b, &div, &mod);
    printf("%d dividido por %d é igual a %d com resto %d\n", a, b, div, mod);
    return 0;
}
