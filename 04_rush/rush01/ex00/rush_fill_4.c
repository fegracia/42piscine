/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:54 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 21:45:37 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> // depois retirar
#include "rush_fill.h"
#include "rush_rules.h"

void	fill_col_4(int reverse, int cols, char**m_matrix)
{
	int	rows;
	int	value;

	value = 1;
	if (reverse == 0)
	{
		rows = 0;
		while (rows < 4)
		{
			m_matrix[rows][cols] = value + '0';
			rows++;
			value++;
		}
	}
	else
	{
		rows = 3;
		while (rows >= 0)
		{
			m_matrix[rows][cols] = value + '0';
			rows--;
			value++;
		}
	}
}

void	fill_row_4(int reverse, int rows, char**m_matrix)
{
	int	cols;
	int	value;

	value = 1;
	if (reverse == 0)
	{
		cols = 0;
		while (cols < 4)
		{
			m_matrix[rows][cols] = value + '0';
			cols++;
			value++;
		}
	}
	else
	{
		cols = 3;
		while (cols >= 0)
		{
			m_matrix[rows][cols] = value + '0';
			cols--;
			value++;
		}
	}
}

void	fill_4(int pos_rows_rules, int pos_cols_rules, char**m_matrix)
{
	if (pos_rows_rules == 0)
		fill_col_4(0, pos_cols_rules, m_matrix);
	else if (pos_rows_rules == 1)
		fill_col_4(1, pos_cols_rules, m_matrix);
	else if (pos_rows_rules == 2)
		fill_row_4(0, pos_cols_rules, m_matrix);
	else
		fill_row_4(1, pos_cols_rules, m_matrix);
}

void	fill_1(int pos_rows_rules, int pos_cols_rules, char**m_matrix)
{
	if (pos_rows_rules == 0)
	{
		if (m_matrix[0][pos_cols_rules] == '0')
			m_matrix[0][pos_cols_rules] = '4';
	}
	else if (pos_rows_rules == 1)
	{
		if (m_matrix[3][pos_cols_rules] == '0')
			m_matrix[3][pos_cols_rules] = '4';
	}
	else if (pos_rows_rules == 2)
	{
		if (m_matrix[pos_cols_rules][0] == '0')
			m_matrix[pos_cols_rules][0] = '4';
	}
	else if (pos_rows_rules == 3)
	{
		if (m_matrix[pos_cols_rules][3] == '0')
			m_matrix[pos_cols_rules][3] = '4';
	}
}
