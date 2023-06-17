/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:58:01 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/18 18:07:44 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char wrd)
{
	char	buf[3];
	char	*hex;

	hex = "0123456789abcdef";
	buf[0] = '\\';
	buf[1] = hex[wrd / 16];
	buf[2] = hex[wrd % 16];
	write(1, buf, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			hexa(str[i]);
		i++;
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
