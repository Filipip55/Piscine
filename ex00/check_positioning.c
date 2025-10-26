/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_positioning.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:03:46 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 20:43:11 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int **grid, int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	check_col(int **grid, int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

//controlla che un numero non si ripeta piu di una volta
//nella sua riga e nella sua colonna
int	is_valid_placement(int **grid, int row, int col, int num)
{
	if (!check_row(grid, row, num))
		return (0);
	if (!check_col(grid, col, num))
		return (0);
	return (1);
}
