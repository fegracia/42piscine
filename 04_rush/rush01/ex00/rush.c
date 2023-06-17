/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:53:18 by wkwong-h          #+#    #+#             */
/*   Updated: 2023/03/12 22:40:44 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush_fill.h"
#include "rush_rules.h"
#include "rush_fill_4.h"

int	verify_4(int rows, int cols, char **m_matrix)
{
	int		count_4;

	count_4 = verify_fill_number(rows, cols, m_matrix, '4');
	if (count_4 == 4)
		return (1);
	else if (count_4 == 3)
		fill_full_value(m_matrix, '4');
	return (0);
}

void	verify_rules(int rows, int cols, char **m_rules, char **m_matrix)
{
	rule_all_3_1x2(rows, cols, m_rules, m_matrix);
	if (verify_fill_number(rows, cols, m_matrix, '3') == 3)
		fill_full_value(m_matrix, '3');
}

void	play_game(int rows, int cols, char **m_rules, char **m_matrix)
{
	int		pos_cols_rules;
	int		pos_rows_rules;
	int		flag_anchor_4;

	pos_cols_rules = 0;
	pos_rows_rules = 0;
	flag_anchor_4 = 0;
	if (flag_anchor_4 == 0)
	{
		while (pos_rows_rules++, pos_rows_rules < rows)
		{
			while (pos_cols_rules++, pos_cols_rules < cols)
			{
				if (m_rules[pos_rows_rules -1][pos_cols_rules -1] == '4')
					fill_4(pos_rows_rules -1, pos_cols_rules -1, m_matrix);
				if (m_rules[pos_rows_rules -1][pos_cols_rules -1] == '1')
					fill_1(pos_rows_rules -1, pos_cols_rules -1, m_matrix);
			}
			pos_cols_rules = 0;
		}
		flag_anchor_4 = verify_4(rows, cols, m_matrix);
	}
	verify_rules(rows, cols, m_rules, m_matrix);
}

void	print_matrix(int rows, int cols, char **m_matrix)
{
	int		pos_rows;
	int		pos_cols;

	pos_rows = 0;
	pos_cols = 0;
	while (pos_rows < rows)
	{
		while (pos_cols < cols)
		{
			write(1, &m_matrix[pos_rows][pos_cols], 1);
			if (pos_cols != cols - 1)
				write(1, " ", 1);
			pos_cols++;
		}
		write(1, "\n", 1);
		pos_cols = 0;
		pos_rows++;
	}
}
