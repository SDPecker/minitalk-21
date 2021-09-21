/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:34:50 by amohiam           #+#    #+#             */
/*   Updated: 2021/09/21 15:38:46 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	get_bits(int bit);
void	send_bits(int pid, char *message);

#endif