/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fill_32.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:57:51 by fgracia           #+#    #+#             */
/*   Updated: 2023/03/12 21:45:26 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_FILL_32_H
# define RUSH_FILL_32_H

void	fill_4_3x2_col(int cols, char**m_rules, char**m_matrix);
void	fill_4_3x2_row(int rows, char**m_rules, char**m_matrix);
void	fill_4_3x2(int rows, int cols, char**m_rules, char**m_matrix);

#endif
