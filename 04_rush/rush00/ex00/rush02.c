/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:53:54 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/03/05 17:09:48 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int		length;
	int		width;

	length = 1;
	width = 1;
	while (length <= x && x > 0 && y > 0)
	{
		while (width <= y && width > 0)
		{
			if ((length == 1 && width == y) || (length == 1 && width == 1))
				ft_putchar('A');
			else if ((length == x && width == 1) || (length == x && width == y))
				ft_putchar('C');
			else if (length == 1 || width == 1 || length == x || width == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		length++;
		width = 1;
	}
}
