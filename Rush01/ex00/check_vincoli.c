/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vincoli.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:10:31 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 22:26:39 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	n_visibili_sx(int **grid, int row);
int	n_visibili_dx(int **grid, int row);
int	n_visibili_top(int **grid, int col);
int	n_visibili_giu(int **grid, int col);

int	check_righe_vincoli(int **grid, int row, int *c)
{
	if (n_visibili_sx(grid, row) != c[8 + row])
		return (0);
	if (n_visibili_dx(grid, row) != c[12 + row])
		return (0);
	return (1);
}

int	check_col_vincoli(int **grid, int col, int *c)
{
	if (n_visibili_top(grid, col) != c[col])
		return (0);
	if (n_visibili_giu(grid, col) != c[4 + col])
		return (0);
	return (1);
}

int	check_vincoli(int **grid, int *constraints)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_righe_vincoli(grid, i, constraints))
			return (0);
		if (!check_col_vincoli(grid, i, constraints))
			return (0);
		i++;
	}
	return (1);
}
