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

int	check_input(int n_input, char *input)
{
	int i;
	int	nbr_count;
	int	spc_count;

	if (n_input != 2)
		return (0);
	spc_count = 0;
	nbr_count = 0;
	i = 0;
	while (input[i])
	{
		if (spc_count > 1)
			return (0);
		if (nbr_count > 1)
			return (0);
		if (input[i] >= '1' && input[i] <= '4')
		{
			nbr_count++;
			spc_count = 0;
		}
        else if (input[i] == ' ')
		{
			spc_count++;
			nbr_count = 0;
		} 
		else
			return (0);
        i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (!check_input(argc, argv[1]))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	write(1, "Ok\n", 6);
}