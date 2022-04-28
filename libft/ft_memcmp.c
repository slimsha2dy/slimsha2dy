/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:23:11 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:23:15 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	unsigned char	*cb1;
	unsigned char	*cb2;
	size_t			cnt;

	cb1 = (unsigned char *)b1;
	cb2 = (unsigned char *)b2;
	cnt = 0;
	while (cnt < n)
	{
		if (cb1[cnt] != cb2[cnt] || cb1[cnt] == 0 || cb2[cnt] == 0)
			return (cb1[cnt] - cb2[cnt]);
		cnt++;
	}
	return (0);
}
