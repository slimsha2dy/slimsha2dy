/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:27:29 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/23 21:06:10 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_plus(int a, int b);
int	ft_minus(int a, int b);
int	ft_mult(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);

int	ft_atoi(char *str)
{
	int			n;
	int			i;
	long long	l;

	n = 1;
	i = 0;
	l = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		l *= 10;
		l += *str - '0';
		str++;
	}
	i = (int)(l * n);
	return (i);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	int	cnb;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	cnb = nb % 10 + '0';
	write(1, &cnb, 1);
}

void	ft_cal(int a, int b, int (*f)(int a, int b))
{
	int	res;

	res = f(a, b);
	if (b == 0 && (*f == ft_div || *f == ft_mod))
		return ;
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	(*f[5])(int a, int b);
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	f[0] = ft_plus;
	f[1] = ft_minus;
	f[2] = ft_mult;
	f[3] = ft_div;
	f[4] = ft_mod;
	if (*av[2] == '+' && av[2][1] == '\0')
		ft_cal(a, b, f[0]);
	else if (*av[2] == '-' && av[2][1] == '\0')
		ft_cal(a, b, f[1]);
	else if (*av[2] == '*' && av[2][1] == '\0')
		ft_cal(a, b, f[2]);
	else if (*av[2] == '/' && av[2][1] == '\0')
		ft_cal(a, b, f[3]);
	else if (*av[2] == '%' && av[2][1] == '\0')
		ft_cal(a, b, f[4]);
	else
		write(1, "0\n", 2);
}
