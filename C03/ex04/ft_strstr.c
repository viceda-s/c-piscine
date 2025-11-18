/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:39:45 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/06 18:41:29 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (*to_find == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && to_find[b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (&str[a]);
		a++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "A minha sogra e um boi";
	char find1[] = "sogra";
	char find2[] = "tua";

	printf("Str: \"%s\", substr: \"%s\" ->
		return: %s\n", str1, find1, ft_strstr(str1, find1));
	printf("Str: \"%s\", substr: \"%s\" ->
		return: %s\n", str1, find2, ft_strstr(str1, find2));
	return (0);
}*/