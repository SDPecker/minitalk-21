/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:54:58 by amohiam           #+#    #+#             */
/*   Updated: 2021/09/21 15:17:37 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power(int n, int p)
{
	int		r;

	r = 1;
	while (p > 0)
	{
		r *= n;
		p--;
	}
	return (r);
}

int	count_digits(const char *s, int pos)
{
	int	i;
	int	r;

	i = pos;
	r = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		i++;
		r++;
	}
	return (r);
}

int	skip(const char *s)
{
	int	i;

	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		res;
	int		sign;
	int		digit_ctr;
	int		i;

	res = 0;
	sign = 1;
	i = skip(nptr);
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	digit_ctr = count_digits(nptr, i);
	while (digit_ctr > 0)
	{
		res += power(10, digit_ctr - 1) * (nptr[i] - 48);
		digit_ctr--;
		i++;
	}
	return (res * sign);
}
