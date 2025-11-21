/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:05:51 by icoman            #+#    #+#             */
/*   Updated: 2025/11/03 12:14:21 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i])
		i++;
	i--;
	while (i > 0)
	{
		j = 0;
		while (c[i][j])
		{
			write(1, &c[i][j++], 1);
		}
		write(1, "\n", 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc)
		ft_putstr(argv);
}
