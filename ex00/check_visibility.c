/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:09:02 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 20:46:43 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
funzioni che contano le scatole visibili da ogni punto di vista

salva in max la scatola piu alta che incontra,
la confronta con le altre posizioni e conta quante volte
max e' stato cambiato, quindi quante scatole sono visibili
*/
int	count_visible_top(int **grid, int col)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = 0;
	while (row < 4)
	{
		if (grid[row][col] > max)
		{
			count++;
			max = grid[row][col];
		}
		row++;
	}
	return (count);
}

int	count_visible_bottom(int **grid, int col)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = 3;
	while (row >= 0)
	{
		if (grid[row][col] > max)
		{
			count++;
			max = grid[row][col];
		}
		row--;
	}
	return (count);
}

int	count_visible_left(int **grid, int row)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 0;
	while (col < 4)
	{
		if (grid[row][col] > max)
		{
			count++;
			max = grid[row][col];
		}
		col++;
	}
	return (count);
}

int	count_visible_right(int **grid, int row)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 3;
	while (col >= 0)
	{
		if (grid[row][col] > max)
		{
			count++;
			max = grid[row][col];
		}
		col--;
	}
	return (count);
}
