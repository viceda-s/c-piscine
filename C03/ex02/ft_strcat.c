/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:09:34 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/06 19:12:16 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest [a + b] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[100] = "impo";
	char	*src = "ssible";

	printf("Return: %s\n", ft_strcat(dest, src));

	return (0);
}*/