/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_posizione.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:03:46 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 22:22:01 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_riga(int **grid, int riga, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[riga][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	check_col(int **grid, int col, int num)
{
	int	riga;

	riga = 0;
	while (riga < 4)
	{
		if (grid[riga][col] == num)
			return (0);
		riga++;
	}
	return (1);
}

//controlla che un numero non si ripeta piu di una volta
//nella sua riga e nella sua colonna
int	check_pos(int **grid, int riga, int col, int num)
{
	if (!check_riga(grid, riga, num))
		return (0);
	if (!check_col(grid, col, num))
		return (0);
	return (1);
}
