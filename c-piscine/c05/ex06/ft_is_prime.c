/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:33:27 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/17 16:54:28 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	unb;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	unb = (unsigned int)nb;
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	while (i * i <= unb)
	{
		if (unb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
