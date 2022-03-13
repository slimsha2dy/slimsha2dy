/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:01:21 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/14 16:15:32 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_addr(void *addr)
{
	char				addr_to_char[16];
	unsigned long long	addr_l;
	int					i;

	addr_l = (unsigned long long)addr;
	i = 0;
	while (addr_l > 0)
	{
		addr_to_char[i] = addr_l % 16;
		if (addr_to_char[i] < 10)
			addr_to_char[i++] += 48;
		else
			addr_to_char[i++] += 87;
		addr_l /= 16;
	}
	while (i < 16)
	{
		addr_to_char[i++] = '0';
	}
	while (--i >= 0)
		write(1, &addr_to_char[i], 1);
	write(1, ": ", 2);
}

void	ft_write_to_hex_or_char(unsigned char dec, int hex_flag)
{
	if (hex_flag == 1)
	{
		if (dec <= 9)
			dec = dec + '0';
		else
			dec = dec + 87;
	}
	else
	{
		if (dec < 32 || dec > 126)
			dec = '.';
	}
	write(1, &dec, 1);
}

void	ft_print_str_in_hex(unsigned char *addr, int len)
{
	int		count_16;

	count_16 = 0;
	while (count_16 < 16)
	{
		if (count_16++ < len)
		{
			ft_write_to_hex_or_char(*addr / 16, 1);
			ft_write_to_hex_or_char(*addr % 16, 1);
		}
		else
			write(1, "  ", 2);
		if (count_16 % 2 == 0)
			write(1, " ", 1);
		addr++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				len;
	unsigned char	*str_pnt;
	void			*rt_addr;

	rt_addr = addr;
	while (size > 0)
	{
		if (size >= 16)
			len = 16;
		else
			len = size;
		ft_print_addr(addr);
		str_pnt = (unsigned char *)addr;
		ft_print_str_in_hex(str_pnt, len);
		addr += len;
		size -= len;
		while (str_pnt != (unsigned char *)addr)
		{
			ft_write_to_hex_or_char(*str_pnt, 0);
			str_pnt++;
		}
		write(1, "\n", 1);
	}
	return (rt_addr);
}
