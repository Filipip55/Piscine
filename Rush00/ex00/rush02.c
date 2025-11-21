/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:31:26 by icoman            #+#    #+#             */
/*   Updated: 2025/10/19 19:00:46 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_check_border(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == x && x > 1))
	{
		ft_putchar('A');
	}
	if ((i == y && j == 1 && y > 1) || (i == y && j == x && y > 1))
	{
		ft_putchar('C');
	}
	if ((i > 1 && i < y) || (j > 1 && j < x))
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 || i == y || j == 1 || j == x)
			{
				ft_check_border(i, j, x, y);
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
