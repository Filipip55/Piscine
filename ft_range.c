#include <stdlib.h>

int	*ft_range(int min, int max)
{
	//METTI HEADER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	if (min >= max)
		return (NULL);
	int *arr = (int)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	int i = 0;
	while (i < max - min + 1)
		arr[i++] = i + min;
	return (arr);
}
