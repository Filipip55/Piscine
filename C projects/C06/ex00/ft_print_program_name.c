/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:58:39 by icoman            #+#    #+#             */
/*   Updated: 2025/11/04 12:49:18 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **c)
{
	int	i;

	i = 0;
	while (c[0][i])
		write(1, &c[0][i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc)
		ft_putstr(argv);
}
