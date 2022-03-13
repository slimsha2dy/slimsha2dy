/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:21:31 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/06 18:02:38 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(int cnt, char *arr)
{
	if (arr[cnt] == '\0')
		return ;
	write(1, &arr[cnt], 1);
	cnt++;
	print_str(cnt, arr);
}

void	recr(int n, char *arr, int i, char grt)
{
	while (arr[i - 1] <= grt)
	{
		if (n == 1)
		{
			print_str(0, arr);
			if (arr[0] != '9' - i + 1)
				write(1, ", ", 2);
			arr[i - 1]++;
		}
		else
		{
			arr[i] = arr[i - 1] + 1;
			recr(n - 1, arr, i + 1, grt + 1);
			arr[i - 1]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	numb[10];
	char	grt;

	grt = '9' - n + 1;
	numb[0] = '0';
	recr(n, numb, 1, grt);
}
