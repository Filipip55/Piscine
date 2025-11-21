/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:31:19 by icoman            #+#    #+#             */
/*   Updated: 2025/10/20 11:42:27 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (j > i)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

/*
int main() {
	int i[4] = {1, 2, 3, 4};
	ft_rev_int_tab(i, 4);
	int j;
	char c;

	j = 0;
	while (j < 4)
	{
		c = '0' + i[j];
		write(1, &c, 1);
		j++;
	}
}
*/