/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:52:02 by icoman            #+#    #+#             */
/*   Updated: 2025/11/06 17:05:25 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_digit_value(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (digit == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_res(char *str, int i, char *base)
{
	int	res;
	int	digit_value;

	res = 0;
	while (1)
	{
		digit_value = get_digit_value(str[i], base);
		if (digit_value == -1)
			return (0);
		res = res * ft_strlen(base) + digit_value;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	segno;

	if (!check_base(base))
		return (0);
	i = 0;
	segno = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			segno *= -1;
		i++;
	}
	return (get_res(str, i, base) * segno);
}

int main(void)
{
	printf("\"101\" in binario = %d \n", ft_atoi_base("101", "01"));
	printf("\"-101\" in binario = %d \n", ft_atoi_base("-101", "01"));
	printf("\"-456\" in decimale = %d \n", ft_atoi_base("-456", "0123456789"));
	printf("\"FF\" in hex = %d (255)\n", ft_atoi_base("FF", "0123456789ABCDEF"));
	printf("\"A5\" in hex = %d (165)\n", ft_atoi_base("A5", "0123456789ABCDEF"));
	
	printf("%d \n", ft_atoi_base("123abc", "0123456789"));
	printf("%d \n", ft_atoi_base("123", "0120"));
	
	return (0);
}