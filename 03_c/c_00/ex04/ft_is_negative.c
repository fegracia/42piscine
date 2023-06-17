/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:51:07 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/09 04:27:51 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write (1, &c, 1);
	}
	else
	{
		c = 'N';
		write (1, &c, 1);
	}
}
