/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:42 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 22:32:26 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_FILL_H
# define RUSH_FILL_H

int		verify_fill_number(int rows, int cols, char**m_matrix, char value);
void	fill_full_value(char**m_matrix, char value);
int		fill_full_value_cols(int *p_row, int *p_col, char**m_matrix, char val);
int		fill_full_value_rows(int *p_row, int *p_col, char**m_matrix, char val);

#endif