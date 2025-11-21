/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:55:01 by icoman            #+#    #+#             */
/*   Updated: 2025/11/03 15:09:10 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{ 	
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(26));
	return 0;
}
*/
