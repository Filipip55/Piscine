/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:15:29 by icoman            #+#    #+#             */
/*   Updated: 2025/10/26 20:40:28 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_char(char c, int *nbr_count, int *spc_count)
{
	if (*spc_count > 1 || *nbr_count > 1)
		return (0);
	if (c >= '1' && c <= '4')
	{
		(*nbr_count)++;
		*spc_count = 0;
		return (1);
	}
	if (c == ' ')
	{
		(*spc_count)++;
		*nbr_count = 0;
		return (1);
	}
	return (0);
}

//controlla che sia una stringa di 16 cifre da 1 a 4 separate da spazio
//in qualsiasi altro caso restituisce 0 e stampa Error (in rush01.c)
int	check_input(char *input)
{
	int	i;
	int	nbr_count;
	int	spc_count;

	spc_count = 0;
	nbr_count = 0;
	i = 0;
	while (input[i])
	{
		if (!is_valid_char(input[i], &nbr_count, &spc_count))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
