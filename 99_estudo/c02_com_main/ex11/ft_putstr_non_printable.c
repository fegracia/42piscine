/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:58:01 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/18 11:04:52 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(char byte)
{
	char	c;

	write(1, "\\", 2);
	if (byte / 16 > 9)
	{
		c = byte / 16 + 87;
		write(1, &c, 1);
	}
	else
	{
		c = byte / 16 + 48;
		write(1, &c, 1);
	}
	if (byte % 16 > 9)
	{
		c = byte % 16 + 87;
		write(1, &c, 1);
	}
	else
	{
		c = byte % 16 + 48;
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 0 && *str < 32) || *str == 127)
			write_hex(*str);
		else
			write(1, str, 1);
			++str;
	}
}

//***************//
// MAIN Function //
//***************//

int	main(void)
{
	char	*s;

	s = "Coucou\ntu vas bien ?/";
	ft_putstr_non_printable(s);
}
