/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:27:21 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/16 12:54:09 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_base(char *base)
{
	int	cnt;

	cnt = 0;
	while (base[cnt])
		cnt++;
	return (cnt);
}

int	valid_base(char *base)
{
	int	i;
	int	cnt;

	i = -1;
	while (base[++i])
	{
		cnt = i + 1;
		while (base[cnt])
		{
			if (base[cnt++] == base[i])
				return (0);
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || (base[i] == ' '))
			return (0);
	}
	return (1);
}

void	recur(long long nbr, int b, char *base)
{
	if (nbr > b - 1)
		recur(nbr / b, b, base);
	write(1, &base[nbr % b], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			b;
	long long	l;

	l = (long long)nbr;
	b = count_base(base);
	if (b == 0 || b == 1 || valid_base(base) == 0)
		return ;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	recur(l, b, base);
}
