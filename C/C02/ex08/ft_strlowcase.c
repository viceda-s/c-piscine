/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:54:01 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 10:56:50 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "HELLO WORLD";
	char	str2[] = "42Network";
	char	str3[] = "ALReaDY lower";
	char	str4[] = "";

	printf("Before: \"%s\" | After: \"%s\"\n", str1, ft_strlowcase(str1));
	printf("Before: \"%s\" | After: \"%s\"\n", str2, ft_strlowcase(str2));
	printf("Before: \"%s\" | After: \"%s\"\n", str3, ft_strlowcase(str3));
	printf("Before: \"%s\" | After: \"%s\"\n", str4, ft_strlowcase(str4));

	return (0);
}*/