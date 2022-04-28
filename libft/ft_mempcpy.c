/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:23:27 by hwichoi           #+#    #+#             */
/*   Updated: 2022/04/28 21:23:32 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			cnt;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	if (dest == 0 || src == 0)
		return (0);
	c_dest = (unsigned char *)dest;
	c_dest = (unsigned char *)src;
	while (cnt < len)
	{
		*c_dest++ = *c_src;
		cnt = cnt + sizeof(char);
	}
	return (c_dest);
}
