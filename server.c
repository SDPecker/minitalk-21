/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:34:33 by amohiam           #+#    #+#             */
/*   Updated: 2021/09/21 15:17:37 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	symbol;
static int	bit_count;

void	get_bits(int bit)
{
	symbol += ((bit & 1) << bit_count);
	bit_count++;
	if (bit_count == 7)
	{
		ft_putchar(symbol);
		if (!symbol)
			write(1, "\n", 1);
		symbol = 0;
		bit_count = 0;
	}
}

int	main(void)
{
	symbol = 0;
	bit_count = 0;
	write(1, "PID: ", 5);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR2, get_bits);
		signal(SIGUSR1, get_bits);
		pause();
	}
	return (1);
}
