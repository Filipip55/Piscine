/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:40:52 by icoman            #+#    #+#             */
/*   Updated: 2025/10/30 19:43:03 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fattoriale;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fattoriale = 1;
	while (nb > 0)
		fattoriale *= nb--;
	return (fattoriale);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-12));
	printf("%d\n", ft_iterative_factorial(6));
}
*/