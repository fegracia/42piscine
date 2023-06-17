/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:15:11 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/05 18:38:12 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int		length;
	int		width;

	width = 1;
	length = 1;
	while (length <= x && x > 0 && y > 0)
	{
		while (width <= y)
		{
			if ((length == x && width == y) || (length == 1 && width == 1))
				ft_putchar('o');
			else if ((length == 1 && width == y) || (length == x && width == 1))
				ft_putchar('o');
			else if (length == 1 || length == x)
				ft_putchar('-');
			else if (width == 1 || width == y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		length++;
		width = 1;
	}
}
