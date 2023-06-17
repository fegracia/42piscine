/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:30:06 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/21 18:55:54 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_atoi(char *str)
{
    int    i;
    int    sign;
    int    result;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
    {
        i++;
    }

    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sign *= -1;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}

int    main(void)
{
    char    *str;
    str = "10";
    printf("Função original: %d\n", atoi(str));
    printf("Função DEUS do Atoi: %d\n", ft_atoi(str));
    return (0);
}
