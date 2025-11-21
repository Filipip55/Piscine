/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:29:36 by icoman            #+#    #+#             */
/*   Updated: 2025/11/06 19:11:07 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nbr, char *base);

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
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	decimal;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(decimal, base_to));
}

int main(void)
{
	char *result;
	result = ft_convert_base("42", "0123456789", "01");
	printf("42 (dec) -> %s (bin)\n", result);
	free(result);
	result = ft_convert_base("-255", "0123456789", "0123456789ABCDEF");
	printf("255 (dec) -> %s (hex)\n", result);
	free(result);
	result = ft_convert_base("-425464", "0123456789", "poneyvif");
	printf("-42 (dec) -> %s (pony ahahahahh)\n", result);
	free(result);
	//base invalida
	result = ft_convert_base("42", "01+", "01");
	printf("Base invalida: %s\n", result ? result : "NULL");
	
	return (0);
}
