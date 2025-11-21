/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:47:13 by icoman            #+#    #+#             */
/*   Updated: 2025/11/21 17:47:00 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}
/*
int main(void)
{
	int *arr = ft_range(5, 10);
	int i;
	for (i = 0; i < 5; i++)
	printf("%d ", arr[i]);
	printf("\n");
	free(arr);
	return 0;
}
*/