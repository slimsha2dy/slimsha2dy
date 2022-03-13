/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:12:04 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/14 16:17:23 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	u_str;

	index = 0;
	u_str = str[0];
	while (u_str != '\0')
	{
		if (u_str >= ' ' && u_str < 127)
			ft_putchar(u_str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[u_str / 16]);
			ft_putchar("0123456789abcdef"[u_str % 16]);
		}
		u_str = str[++index];
	}
}
