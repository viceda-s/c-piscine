/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 06:57:20 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/15 10:28:23 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		if (!ret[i].copy)
			return (NULL);
		i ++;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}

/* #include <stdio.h>

int	main(int argc, char **argv)
{
	t_stock_str *array;
	int i;

	array = ft_strs_to_tab(argc - 1, &argv[1]);
	if (!array)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	i = 0;
	while (array[i].str != 0)
	{
		printf("String original : %s\n", array[i].str);
		printf("Cópia da string : %s\n", array[i].copy);
		printf("Tamanho         : %d\n", array[i].size);
		printf("--------------------------\n");
		i++;
	}

	i = 0;
	while (array[i].copy != 0)
	{
		free(array[i].copy);
		i++;
	}
	free(array);
	return (0);
} */