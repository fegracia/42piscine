/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:40:39 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 23:47:30 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	temp = 0;
	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i++;
		j--;
	}
}


int main(void) {
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Antes: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    ft_rev_int_tab(tab, size);

    printf("\nDepois: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}