/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:39:13 by icoman            #+#    #+#             */
/*   Updated: 2025/11/03 16:16:42 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

int main()
{
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(2, 6));
	printf("%d\n", ft_recursive_power(2, -2));
	return 0;
}

