/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:54:52 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 21:12:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_all_constraints(int **grid, int *constraints);
int	is_valid_placement(int **grid, int row, int col, int num);
int	try_number(int **grid, int *constraints, int pos, int num);

/*
se ci troviamo nell'ultima casella (e quindi ha riempito tutte le altre)
allora controlla che soddisfi i costraints
altrimenti con try_number prova a posizionare un numero 
nella casella in cui ci troviamo, se non e' valido allora lo resettiamo a 0
in modo da non compromettere futuri controlli su quella riga e quella colonna 
con un numero doppione

ripete finche non siamo su pos 16 e controlla se le visibilita sono rispettate
in caso non lo siano, si continua a provare nuove combinazioni di numeri
altrimenti si stampa la matrice (in rush01.c)

se solve_recursive restituisce 0 allora ha provato tutti i numeri
per tutte le posizioni e nessuna combinazione ha superato check_all_constraints
quindi l'input è impossibile da risolvere
*/
int	solve_recursive(int **grid, int *constraints, int pos)
{
	int	num;

	if (pos == 16)
		return (check_all_constraints(grid, constraints));
	num = 1;
	while (num <= 4)
	{
		if (try_number(grid, constraints, pos, num))
			return (1);
		num++;
	}
	return (0);
}

int	try_number(int **grid, int *constraints, int pos, int num)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	if (is_valid_placement(grid, row, col, num))
	{
		grid[row][col] = num;
		if (solve_recursive(grid, constraints, pos + 1))
			return (1);
		grid[row][col] = 0;
	}
	return (0);
}
