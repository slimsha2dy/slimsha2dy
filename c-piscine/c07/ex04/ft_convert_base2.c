/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:47:34 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/22 15:56:30 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_base(char *base)
{
	int	cnt;

	cnt = 0;
	while (base[cnt])
		cnt++;
	return (cnt);
}

int	count_digit(long long nbr, int b)
{
	int	digit;

	digit = 0;
	while (nbr > 0)
	{
		nbr = nbr / b;
		digit++;
	}
	return (digit);
}

char	*ft_putnbr_base(long long nbr, char *base, int b)
{
	int		digit;
	char	*result;

	if (nbr < 0)
	{
		nbr = -nbr;
		digit = count_digit(nbr, b);
		result = (char *)malloc(sizeof(char) * (++digit));
		result[0] = '-';
	}
	else
	{
		digit = count_digit(nbr, b);
		result = (char *)malloc(sizeof(char) * (digit));
	}
	if (!result)
		return (0);
	result[digit] = '\0';
	while (nbr > 0)
	{
		result[--digit] = base[nbr % b];
		nbr = nbr / b;
	}
	return (result);
}
