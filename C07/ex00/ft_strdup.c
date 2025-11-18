/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:27:17 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/12 11:14:13 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*original;
	char	*copy;

	original = "42 School ft_strdup!";
	copy = ft_strdup(original);
	if (copy == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Copy    : %s\n", copy);
	free(copy);
	return (0);
}
 */