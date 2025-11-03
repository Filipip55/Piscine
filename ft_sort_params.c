#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_sort_params(int argc, char **argv)
{
	int i;
	int j;
	int min_idx;
	char *temp;

	i = 1;
	while (i < argc - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			temp = argv[i];
			argv[i] = argv[min_idx];
			argv[min_idx] = temp;
		}
		i++;
	}
}

//METTI L'HEADER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
