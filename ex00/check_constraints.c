/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_constraints.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:10:31 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 20:29:38 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_left(int **grid, int row);
int	count_visible_right(int **grid, int row);
int	count_visible_top(int **grid, int col);
int	count_visible_bottom(int **grid, int col);

int	check_row_constraints(int **grid, int row, int *c)
{
	if (count_visible_left(grid, row) != c[8 + row])
		return (0);
	if (count_visible_right(grid, row) != c[12 + row])
		return (0);
	return (1);
}

int	check_col_constraints(int **grid, int col, int *c)
{
	if (count_visible_top(grid, col) != c[col])
		return (0);
	if (count_visible_bottom(grid, col) != c[4 + col])
		return (0);
	return (1);
}

int	check_all_constraints(int **grid, int *constraints)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_constraints(grid, i, constraints))
			return (0);
		if (!check_col_constraints(grid, i, constraints))
			return (0);
		i++;
	}
	return (1);
}
