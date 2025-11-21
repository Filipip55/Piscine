/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:11:31 by icoman            #+#    #+#             */
/*   Updated: 2025/11/21 17:48:38 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*generate_str(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		ft_strcpy(result + pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result + pos, sep);
			pos += ft_strlen(sep);
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		total_len;

	if (size == 0)
	{
		new_str = (char *)malloc(1);
		if (new_str)
		{
			new_str[0] = '\0';
			return (new_str);
		}
		else
			return (NULL);
	}
	total_len = calculate_total_length(size, strs, sep);
	new_str = (char *)malloc((total_len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	return (generate_str(size, strs, sep, new_str));
}
/*
int main()
{
	char *s1[] = {"ciao", "come", "va"};
	char *sep = " - ";
	printf("%s\n", ft_strjoin(4, s1, sep));
}
*/