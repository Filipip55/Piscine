/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:56:08 by icoman            #+#    #+#             */
/*   Updated: 2025/11/06 18:58:08 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	span;

	span = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < span)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (i);
}

int main(void)
{
	int *arr;
	int size = ft_ultimate_range(&arr, 5, 10);
	int i;
	for (i = 0; i < 5; i++)
	printf("%d ", arr[i]);
	printf("\n");
	printf("%d\n", size);
	free(arr);
	return 0;
}
