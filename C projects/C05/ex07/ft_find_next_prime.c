/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:12:40 by icoman            #+#    #+#             */
/*   Updated: 2025/11/04 15:12:39 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(-12));
	printf("%d\n", ft_find_next_prime(3));
	return 0;
}
*/