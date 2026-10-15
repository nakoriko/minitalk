/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:37:23 by nakoriko          #+#    #+#             */
/*   Updated: 2024/07/31 14:50:34 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include "libft/libft.h"

void	ft_handler(int bit);
void	send_msg(int pid, char c);
int		ft_isdigit(int c);
int		ft_check(char *pid, char *str);

#endif
