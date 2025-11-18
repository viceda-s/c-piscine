/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:36:25 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/06 19:12:44 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
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
	char	*src = "ssibility";

	printf("Return: %s\n", ft_strncat(dest, src, 5));

	return (0);
}*/