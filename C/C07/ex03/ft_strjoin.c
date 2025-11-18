/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:14:55 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/14 08:13:13 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght = lenght + ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + (size - 1) * ft_strlen(sep) + 1;
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_join_strings(char *str, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_length;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = 0;
		return (str);
	}
	total_length = ft_len(strs, size, sep);
	str = malloc(sizeof(char) * total_length);
	if (!str)
		return (NULL);
	*str = 0;
	str = ft_join_strings(str, size, strs, sep);
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char *words[] = {"Hello", "world", "42"};
	char *sep = ", ";
	char *joined = ft_strjoin(3, words, sep);
	printf("%s\n", joined);
	free(joined);
	return 0;
} */