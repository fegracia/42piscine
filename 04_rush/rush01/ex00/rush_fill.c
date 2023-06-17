/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:45 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 22:33:04 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_fill_number(int rows, int cols, char**m_matrix, char value)
{
	int	count;
	int	pos_rows;
	int	pos_cols;

	count = 0;
	pos_rows = 0;
	pos_cols = 0;
	while (pos_rows < rows)
	{
		while (pos_cols < cols)
		{
			if (m_matrix[pos_rows][pos_cols] == value)
				count++;
			pos_cols++;
		}
		pos_cols = 0;
		pos_rows++;
	}
	return (count);
}

int	fill_full_value_rows(int *p_row, int *p_col, char**m_matrix, char val)
{
	int		flag_4;

	flag_4 = 0;
	while (*p_row < 4)
	{
		while (*p_col < 4)
		{
			if (m_matrix[*p_row][*p_col] == val)
			{
				flag_4 = 1;
				break ;
			}
			(*p_col)++;
		}
		if (flag_4 == 0)
			return (*p_row);
		else
		{
			flag_4 = 0;
			*p_col = 0;
		}
		(*p_row)++;
	}
	return (0);
}

int	fill_full_value_cols(int *p_row, int *p_col, char**m_matrix, char val)
{
	int		flag_4;

	flag_4 = 0;
	while (*p_col < 4)
	{
		while (*p_row < 4)
		{
			if (m_matrix[*p_row][*p_col] == val)
			{
				flag_4 = 1;
				break ;
			}
			(*p_row)++;
		}
		if (flag_4 == 0)
			return (*p_col);
		else
		{
			flag_4 = 0;
			*p_row = 0;
		}
		(*p_col)++;
	}
	return (0);
}

void	fill_full_value(char**m_matrix, char value)
{
	int	pos_rows;
	int	pos_cols;
	int	pos_4_rows;
	int	pos_4_cols;

	pos_rows = 0;
	pos_cols = 0;
	pos_4_rows = fill_full_value_rows(&pos_rows, &pos_cols, m_matrix, value);
	pos_rows = 0;
	pos_cols = 0;
	pos_4_cols = fill_full_value_cols(&pos_rows, &pos_cols, m_matrix, value);
	if (pos_cols != 0 && pos_rows != 0)
		m_matrix[pos_4_rows][pos_4_cols] = value;
}
