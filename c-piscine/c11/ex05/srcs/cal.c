/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:58:02 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/23 18:23:59 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_plus(int a, int b)
{
	return (a + b);
}

int	ft_minus(int a, int b)
{
	return (a - b);
}

int	ft_mult(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (a / b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (a % b);
}
