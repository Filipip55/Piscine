/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:09:02 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 22:23:17 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
funzioni che contano le scatole visibili da ogni punto di vista

salva in max la scatola piu alta che incontra,
la confronta con le altre posizioni e conta quante volte
max e' stato cambiato, quindi quante scatole sono visibili
*/
int	n_visibili_top(int **grid, int col)
{
	int	max;
	int	count;
	int	riga;

	max = 0;
	count = 0;
	riga = 0;
	while (riga < 4)
	{
		if (grid[riga][col] > max)
		{
			count++;
			max = grid[riga][col];
		}
		riga++;
	}
	return (count);
}

int	n_visibili_giu(int **grid, int col)
{
	int	max;
	int	count;
	int	riga;

	max = 0;
	count = 0;
	riga = 3;
	while (riga >= 0)
	{
		if (grid[riga][col] > max)
		{
			count++;
			max = grid[riga][col];
		}
		riga--;
	}
	return (count);
}

int	n_visibili_sx(int **grid, int riga)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 0;
	while (col < 4)
	{
		if (grid[riga][col] > max)
		{
			count++;
			max = grid[riga][col];
		}
		col++;
	}
	return (count);
}

int	n_visibili_dx(int **grid, int riga)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 3;
	while (col >= 0)
	{
		if (grid[riga][col] > max)
		{
			count++;
			max = grid[riga][col];
		}
		col--;
	}
	return (count);
}
