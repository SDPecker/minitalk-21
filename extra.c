/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:24:41 by amohiam           #+#    #+#             */
/*   Updated: 2021/09/05 15:24:21 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	t;

	if (n < 0)
	{
		write(1, "-", 1);
		t = (unsigned int)(-1 * n);
	}
	else
		t = (unsigned int)n;
	if (t >= 10)
		ft_putnbr(t / 10);
	ft_putchar(t % 10 + 48);
}
