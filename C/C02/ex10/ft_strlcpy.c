/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:34:38 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 16:06:22 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*int	main(void)
{
	char	src[] = "bwoah... c'est bon";
	char	dest[25];
	unsigned int	size;
	unsigned int	result;

	size = 10;
	result = ft_strlcpy(dest, src, size);

	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	printf("ret (src length): %u\n", result);

	return (0);
}*/