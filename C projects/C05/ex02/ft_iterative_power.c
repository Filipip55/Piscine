/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:00:48 by icoman            #+#    #+#             */
/*   Updated: 2025/11/03 16:17:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n_elevato;

	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	n_elevato = 1;
	while (power > 0)
	{
		n_elevato *= nb;
		power--;
	}
	return (n_elevato);
}
/*
int main()
{
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 2));
	return 0;
}
*/