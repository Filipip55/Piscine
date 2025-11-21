/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:05:45 by icoman            #+#    #+#             */
/*   Updated: 2025/11/06 19:25:31 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	get_digit_value(char digit, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	segno;
	int	res;
	int	digit_value;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	segno = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			segno *= -1;
		i++;
	}
	res = 0;
	while (1)
	{
		digit_value = get_digit_value(str[i], base);
		if (digit_value == -1)
			return (0);
		res = res * ft_strlen(base) + digit_value;
		i++;
	}
	return (res * segno);
}

int	count_digits(long n, int base_len)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= base_len;
		count++;
	}
	return (count);
}

void	fill_result(char *result, long n, char *base, int is_neg)
{
	int	len;
	int	start;
	int	base_len;

	start = 0;
	if (is_neg)
	{
		result[0] = '-';
		start = 1;
		n = -n;
	}
	base_len = ft_strlen(base);
	len = start + count_digits(n, base_len);
	result[len] = '\0';
	if (n == 0)
		result[start] = base[0];
	while (n > 0)
	{
		len--;
		result[len] = base[n % base_len];
		n /= base_len;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;
	long	n;
	int		is_neg;

	base_len = ft_strlen(base);
	n = nbr;
	is_neg = (n < 0);
	len = count_digits(n, base_len);
	if (is_neg)
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	fill_result(result, n, base, is_neg);
	return (result);
}
