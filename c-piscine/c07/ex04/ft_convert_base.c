/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:36:53 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/21 17:57:28 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(long long nbr, char *base, int b);
int		count_base(char *base);

int	base_number(char c, char *base)
{
	int	cnt;

	cnt = -1;
	while (base[++cnt] != '\0')
	{
		if (base[cnt] == c)
			return (cnt);
	}
	return (-1);
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
		else if ((base[i] >= 9 && base[i] <= 13) || (base[i] == ' '))
			return (0);
	}
	return (1);
}

long long	ft_atoi_base(char *str, char *base)
{
	int			b;
	long long	result;
	int			minus;

	result = 0;
	minus = 1;
	b = count_base(base);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (base_number(*str, base) != -1)
	{
		result *= b;
		result += base_number(*str, base);
		str++;
	}
	return (result * minus);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long		int_res;
	char			*result;

	if (count_base(base_from) <= 1 || count_base(base_to) <= 1)
		return (0);
	if (valid_base(base_from) == 0 || valid_base(base_to) == 0)
		return (0);
	int_res = ft_atoi_base(nbr, base_from);
	if (int_res == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		result[0] = base_to[0];
		result[1] = '\0';
		return (result);
	}
	result = ft_putnbr_base(int_res, base_to, count_base(base_to));
	return (result);
}
