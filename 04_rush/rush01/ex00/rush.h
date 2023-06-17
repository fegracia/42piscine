/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkwong-h <wkwong-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:11:31 by wkwong-h          #+#    #+#             */
/*   Updated: 2023/03/12 22:37:42 by wkwong-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>

int		verify_4(int rows, int cols, char **m_matrix);
void	verify_rules(int rows, int cols, char **m_rules, char **m_matrix);
void	play_game(int rows, int cols, char **m_rules, char **m_matrix);
void	print_matrix(int rows, int cols, char **m_matrix);

#endif
