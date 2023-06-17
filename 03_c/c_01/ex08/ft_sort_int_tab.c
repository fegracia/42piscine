/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:01:11 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/19 23:52:17 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
			j++;
		}
		i++;
	}
}

int main(void) {
    int tab[] = {10, 7, 3, 6, 8, 1, 2, 4, 9, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Array antes de ser ordenado:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    ft_sort_int_tab(tab, size);

    printf("\nArray depois de ser ordenado:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
}
