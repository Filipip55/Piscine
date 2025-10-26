/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:54:52 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 22:20:58 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_vincoli(int **grid, int *vincoli);
int	check_pos(int **grid, int riga, int col, int num);
int	try_number(int **grid, int *vincoli, int pos, int num);

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

se try_solving restituisce 0 allora ha provato tutti i numeri
per tutte le posizioni e nessuna combinazione ha superato check_all_vincoli
quindi l'input è impossibile da risolvere
*/
int	try_solving(int **grid, int *vincoli, int pos)
{
	int	num;

	if (pos == 16)
		return (check_vincoli(grid, vincoli));
	num = 1;
	while (num <= 4)
	{
		if (try_number(grid, vincoli, pos, num))
			return (1);
		num++;
	}
	return (0);
}

int	try_number(int **grid, int *vincoli, int pos, int num)
{
	int	riga;
	int	col;

	riga = pos / 4;
	col = pos % 4;
	if (check_pos(grid, riga, col, num))
	{
		grid[riga][col] = num;
		if (try_solving(grid, vincoli, pos + 1))
			return (1);
		grid[riga][col] = 0;
	}
	return (0);
}
