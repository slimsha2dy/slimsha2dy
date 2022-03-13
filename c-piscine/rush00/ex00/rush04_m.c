/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:29:19 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/05 16:53:01 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_rush(int x, int y, int x_c, int y_c)
{
	while (y_chk <= y)
	{
		while (x_chk <= x)
		{
			if ((x_chk == 1 && y_chk == 1))
				ft_putchar('A');
			else if ((x_chk == 1 && y_chk == y) || (x_chk == x && y_chk == 1))
				ft_putchar('C');
			else if ((x_chk == x && y_chk == y))
				ft_putchar('A');
			else if ((x_chk > 1 && x_chk < x) && (y_chk > 1 && y_chk < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_chk++;
		}
	}
}

void	rush(int x, int y)
{
	int	x_chk;
	int	y_chk;

	if (x < 1 || y < 1)
		return ;
	x_chk = 1;
	y_chk = 1;
	put_rush(x, y, x_chk, y_chk);
}
