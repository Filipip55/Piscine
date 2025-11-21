/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:06:42 by icoman            #+#    #+#             */
/*   Updated: 2025/10/22 16:57:45 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
L’ultima combinazione valida per n = 2 è 89 -> arr[0] == 8
10 - n = 8 -> quindi, se arr[0] == 8 siamo nell'ultimo caso
*/
void	print_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*
nbr_arr: combinazione in costruzione
index: posizione corrente nell’array dove mettere il prossimo numero
n: quante cifre vogliamo nelle combinazioni
start: da quale cifra iniziare a provare per evitare duplicati

exit case: index == n cioe abbiamo completato una combinazione
*/
void	backtrack(int *nbr_arr, int index, int n, int start)
{
	int	i;

	if (index == n)
	{
		print_comb(nbr_arr, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		nbr_arr[index] = i;
		backtrack(nbr_arr, index + 1, n, i + 1);
		i++;
	}
}

/*
controlla che n sia valido
crea un array di 10 caratteri (il massimo numero di cifre)
*/
void	ft_print_combn(int n)
{
	int	nbr_arr[10];

	if (n < 0 || n > 10)
		return ;
	backtrack(nbr_arr, 0, n, 0);
}


int main()
{
    ft_print_combn(1);
    return 0;
}
