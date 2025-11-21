/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:38:15 by icoman            #+#    #+#             */
/*   Updated: 2025/10/27 19:16:05 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
}
/*
int main(){
	char *a = "CIAO";
	char *b = "CIA";
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
}
*/