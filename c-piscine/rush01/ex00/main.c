/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:58:19 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 15:35:32 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	int	*input_arr;
	int	result;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input_arr = int_inputarr(av[1]);
	if (input_arr == 0 || valid_check(input_arr) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	result = scrapper_setting(input_arr);
	if (result == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	free(input_arr);
	return (0);
}
