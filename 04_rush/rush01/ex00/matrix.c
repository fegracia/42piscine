/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:47:28 by wkwong-h          #+#    #+#             */
/*   Updated: 2023/03/12 20:51:32 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**init_matrix(int rows, int cols, char value)
{
	char	**m_game;
	int		pos_rows;
	int		pos_cols;

	pos_rows = 0;
	pos_cols = 0;
	m_game = malloc(sizeof(char *) * rows);
	while (pos_cols < cols)
	{
		m_game[pos_cols] = malloc(sizeof(char) * cols);
		pos_cols++;
	}
	pos_rows = 0;
	pos_cols = 0;
	while (pos_rows < rows)
	{
		while (pos_cols < cols)
		{
			m_game[pos_rows][pos_cols] = value;
			pos_cols++;
		}
		pos_cols = 0;
		pos_rows++;
	}
	return (m_game);
}

void	free_matrix(char **matrix, int cols)
{
	int		pos_cols;

	pos_cols = 0;
	while (pos_cols < cols)
	{
		free(matrix[pos_cols]);
		pos_cols++;
	}
	free(matrix);
}
