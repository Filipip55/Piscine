/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:13:55 by icoman            #+#    #+#             */
/*   Updated: 2025/10/25 12:46:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	check_input_for_error(int n_input, char **input)
{
	int i;

	i = 0;
	if (n_input != 2)
	{
		return (1);
	}
	while (input[1][i])
	{
		if (!((input[1][i] >= '1' && input[1][i] <= '4') || input[1][i] == ' '))
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (check_input_for_error(argc, argv))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	write(1, "Ok\n", 6);
}