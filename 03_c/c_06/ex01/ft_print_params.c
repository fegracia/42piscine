/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 00:19:02 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/23 02:04:01 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*argum;

	i = 1;
	while (i < argc)
	{
		j = 0;
		argum = argv[i];
		while (argum[j] != '\0')
		{
			write(1, &argum[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
