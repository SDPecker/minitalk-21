/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:03:49 by amohiam           #+#    #+#             */
/*   Updated: 2021/09/21 15:15:54 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bits(int pid, char *message)
{
	int	bit_num;
	int	i;

	i = 0;
	while (i < (int)ft_strlen(message))
	{
		bit_num = 0;
		while (bit_num < 7)
		{
			if ((message[i] >> bit_num) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			bit_num++;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		send_bits(pid, argv[2]);
	}
	else
		write(1, "Input error, try again", 22);
	return (0);
}
