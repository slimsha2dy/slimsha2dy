/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:31:35 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/15 20:15:15 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else if ((base[i] >= 9 && base[i] <= 13) || (base[i] == ' '))
			return (0);
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			b;
	long long	result;
	int			minus;

	result = 0;
	minus = 1;
	b = count_base(base);
	if (b == 0 || b == 1 || valid_base(base) == 0)
		return (0);
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
