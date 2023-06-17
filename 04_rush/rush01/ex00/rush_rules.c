/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:39 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 22:39:28 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule_all_3_1x2(int rows, int cols, char**m_rules, char**m_matrix)
{
	int	pos_rows;
	int	pos_cols;

	pos_rows = 0;
	pos_cols = 0;
	while (pos_cols < cols)
	{
		if (m_rules[0][pos_cols] == '1' && m_rules[1][pos_cols] == '2')
			m_matrix[3][pos_cols] = '3';
		else if (m_rules[0][pos_cols] == '2' && m_rules[1][pos_cols] == '1')
			m_matrix[0][pos_cols] = '3';
	pos_cols++;
	}
	pos_rows = 0;
	while (pos_rows < rows)
	{
		if (m_rules[2][pos_rows] == '1' && m_rules[3][pos_rows] == '2')
			m_matrix[pos_rows][3] = '3';
		else if (m_rules[2][pos_rows] == '2' && m_rules[3][pos_rows] == '1')
			m_matrix[pos_rows][0] = '3';
	pos_rows++;
	}
}
