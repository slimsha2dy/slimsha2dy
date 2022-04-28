/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:22:22 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:22:39 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dig_size(int n, int minus)
{
	int	dig;

	dig = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		dig++;
	}
	if (minus)
		dig++;
	return (dig);
}

char	*ft_itoa(int n)
{
	char	*buf;
	int		minus;
	int		size;

	if (n == -2147483648)
		return ("-2147483648");
	minus = 0;
	if (n < 0)
	{
		n *= -1;
		minus = 1;
	}
	size = dig_size(n, minus);
	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (minus == 1)
		buf[0] = '-';
	buf[size] = 0;
	if (n == 0)
		buf[0] = '0';
	while (n > 0)
	{
		buf[--size] = (n % 10) + '0';
		n = n / 10;
	}
	return (buf);
}
