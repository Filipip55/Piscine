/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:36:02 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 20:18:26 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//estrae i numeri dall'input e li colloca in un array
int	*parse_constraints(char *input)
{
	int	*constraints;
	int	i;
	int	j;

	constraints = (int *)malloc(16 * sizeof(int));
	if (!constraints)
		return (NULL);
	i = 0;
	j = 0;
	while (input[i] && j < 16)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			constraints[j] = input[i] - '0';
			j++;
		}
		i++;
	}
	return (constraints);
}

//crea e inizializza una matrice di interi 4x4
int	**init_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(4 * sizeof(int *));
	if (!grid)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * sizeof(int));
		if (!grid[i])
			return (NULL);
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
