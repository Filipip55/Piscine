/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:13:55 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 21:09:25 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);
int		check_input(char *input);
int		*parse_constraints(char *input);
int		**init_grid(void);
int		solve_recursive(int **grid, int *constraints, int pos);
void	print_grid(int **grid);
void	free_grid(int **grid);

//se si entra in else vuol dire che non esiste soluzione per 
//l'input che e' stato passato
int	main(int argc, char **argv)
{
	int	**grid;
	int	*constraints;

	if (argc != 2 || !check_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	constraints = parse_constraints(argv[1]);
	grid = init_grid();
	if (solve_recursive(grid, constraints, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_grid(grid);
	free(constraints);
	return (0);
}
