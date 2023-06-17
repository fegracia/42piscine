/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 00:19:05 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/23 01:49:40 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	name = argv[0];
	if (argc >= 1)
	{
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
