/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill_32.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:54 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 21:46:10 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> // depois retirar
#include "rush_fill.h"
#include "rush_rules.h"

void	fill_4_3x2_col(int cols, char**m_rules, char**m_matrix)
{
	int	count_cols;

	count_cols = 0;
	while (count_cols < cols)
	{
		if (m_rules[0][count_cols] == '3' && m_rules[1][count_cols] == '2')
		{
			m_matrix[2][count_cols] = '4';
		}
		else if (m_rules[0][count_cols] == '2' && m_rules[1][count_cols] == '3')
		{
			m_matrix[1][count_cols] = '4';
		}
		count_cols++;
	}
}

void	fill_4_3x2_row(int rows, char**m_rules, char**m_matrix)
{
	int	count_rows;

	count_rows = 0;
	while (count_rows < rows)
	{
		if (m_rules[2][count_rows] == '3' && m_rules[3][count_rows] == '2')
		{
			m_matrix[count_rows][2] = '4';
		}
		else if (m_rules[2][count_rows] == '2' && m_rules[3][count_rows] == '3')
		{
			m_matrix[count_rows][1] = '4';
		}
		count_rows++;
	}
}

void	fill_4_3x2(int rows, int cols, char**m_rules, char**m_matrix)
{
	fill_4_3x2_col(cols, m_rules, m_matrix);
	fill_4_3x2_row(rows, m_rules, m_matrix);
}
