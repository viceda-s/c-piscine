/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:40:33 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/19 09:35:17 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	while (str[len] && !is_separator(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			arr[i] = malloc_word(str, charset);
			i++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
		else
			str++;
	}
	arr[i] = NULL;
	return (arr);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str = "Hello,,world,,this,is,a,test";
	char	*charset = ",;";
	char	**result;
	int		i = 0;

	result = ft_split(str, charset);
	if (!result)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	while (result[i])
	{
		printf("Palavra %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
} */