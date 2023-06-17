/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:17:31 by wkwong-h          #+#    #+#             */
/*   Updated: 2023/03/12 22:08:58 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "matrix.h"
#include <stdio.h>

void	fill_information(char **m_rules, char *args)
{
	int		pos_rows;
	int		pos_cols;

	pos_rows = 0;
	pos_cols = 0;
	while (*args)
	{
		if (*args >= '0' && *args <= '9')
		{
			m_rules[pos_rows][pos_cols] = *args;
			pos_cols++;
			if (pos_cols > 3)
			{
				pos_rows++;
				pos_cols = 0;
			}
		}
		args++;
	}
}

int	validation(char *args)
{
	int		count;

	if (*args < '0' || *args > '4')
		return (1);
	count = 0;
	while (*(args + count))
	{
		if (*(args + count + 1) == '\0' && *(args + count) == ' ')
		{
			return (1);
		}
		count++;
	}
	return (2);
}

int	main(int argv, char **argc)
{
	int		rows;
	int		cols;
	char	**m_rules;
	char	**m_matrix;

	if (argv != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	else if (validation(argc[1]) == 1)
	{
		write(1, "Error", 5);
		return (0);
	}
	rows = 4;
	cols = 4;
	m_rules = init_matrix(rows, cols, '0');
	m_matrix = init_matrix(rows, cols, '0');
	fill_information(m_rules, argc[1]);
	play_game(rows, cols, m_rules, m_matrix);
	print_matrix(rows, cols, m_matrix);
	free(m_rules);
	free(m_matrix);
	return (0);
}
