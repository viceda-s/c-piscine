/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluz-ste <gluz-ste@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:47:32 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/10 16:47:35 by gluz-ste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	check_spaces(char *str)
{
	int	i;
	int	space_count;

	i = 0;
	space_count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			space_count++;
		i++;
	}
	if (space_count != 15)
		return (1);
	return (0);
}

int	check_first_last(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i < 1)
		return (1);
	if (str[0] == ' ' || str[i - 1] == ' ')
		return (1);
	return (0);
}

int	check_double_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i + 1])
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	parse_clues(char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (check_spaces(str) || check_first_last(str) || check_double_spaces(str))
	{
		ft_putstr("Error\n");
		return (1);
	}
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] >= '1' && str[i] <= '4')
			clues[j++] = str[i++] - '0';
		else
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	return (0);
}
