/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:45:37 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/18 16:57:12 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	caps;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			caps = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			caps = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			caps = 1;
		else
			caps = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && caps == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && caps == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
