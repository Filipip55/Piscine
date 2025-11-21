/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:31:26 by icoman            #+#    #+#             */
/*   Updated: 2025/10/19 18:53:21 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_check_border(int i, int j, int x, int y)
{
	if ((i == 1 || i == y) && (j == 1 || (j == x && x > 1)))
	{
		ft_putchar('o');
	}
	if (i > 1 && i < y)
	{
		ft_putchar('|');
	}
	if (j > 1 && j < x)
	{
		ft_putchar('-');
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
