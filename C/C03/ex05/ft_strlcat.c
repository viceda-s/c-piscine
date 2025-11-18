/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:01:08 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/05 14:18:15 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	a = dest_len;
	b = 0;
	while (src[b] != '\0' && a < size - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>

int main(void)
{
    char dest[10] = "A tua ";
    char src[] = "prima de 4!";
    unsigned int size = sizeof(dest);
    unsigned int result;

    result = ft_strlcat(dest, src, size);

    printf("Result: %u\n", result);
    printf("Cat string: '%s'\n", dest);

    return 0;
}*/
