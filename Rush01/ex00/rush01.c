/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:13:55 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 22:24:16 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_input(char *input);
int		*parse_vincoli(char *input);
int		**init_grid(void);
int		try_solving(int **grid, int *vincoli, int pos);
void	print_grid(int **grid);
void	free_grid(int **grid);

//se si entra in else vuol dire che non esiste soluzione per 
//l'input che e' stato passato
int	main(int argc, char **argv)
{
	int	**grid;
	int	*vincoli;

	if (argc != 2 || !check_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	vincoli = parse_vincoli(argv[1]);
	grid = init_grid();
	if (try_solving(grid, vincoli, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_grid(grid);
	free(vincoli);
	return (0);
}
