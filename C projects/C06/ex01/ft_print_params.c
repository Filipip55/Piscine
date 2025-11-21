/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:00:45 by icoman            #+#    #+#             */
/*   Updated: 2025/11/03 11:30:55 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **c)
{
	int	i;
	int	j;

	i = 1;
	while (c[i])
	{
		j = 0;
		while (c[i][j])
		{
			write(1, &c[i][j++], 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc)
		ft_putstr(argv);
}
