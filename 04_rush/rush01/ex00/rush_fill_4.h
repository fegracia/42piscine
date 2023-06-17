/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill_4.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:51 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 22:36:19 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_FILL_4_H
# define RUSH_FILL_4_H

void	fill_col_4(int reverse, int cols, char**m_matrix);
void	fill_row_4(int reverse, int rows, char**m_matrix);
void	fill_4(int pos_rows_rules, int pos_cols_rules, char**m_matrix);
void	fill_1(int pos_rows_rules, int pos_cols_rules, char**m_matrix);

#endif
