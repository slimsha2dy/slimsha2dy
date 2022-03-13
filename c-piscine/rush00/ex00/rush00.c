/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:25:22 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/05 17:35:40 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a > 1 && a < x) && (b == 1 || b == y))
				ft_putchar('-');
			else if ((b > 1 && b < y) && (a == 1 || a == x))
				ft_putchar('|');
			else if ((a > 1 && a < x) && (b > 1 && b < y))
				ft_putchar(' ');
			else
				ft_putchar('o');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
