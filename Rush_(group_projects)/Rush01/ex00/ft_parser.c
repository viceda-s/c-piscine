/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluz-ste <gluz-ste@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:49:02 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/10 16:49:05 by gluz-ste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	check_number(char c, int *counter)
{
	if (c >= '1' && c <= '4')
	{
		(*counter)++;
		return (1);
	}
	return (0);
}

int	ft_parser(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (check_number(str[i], &counter))
			i++;
		else
		{
			ft_putstr("Error, the argments are not between 1 and 4\n");
			return (1);
		}
	}
	if (counter != 16)
	{
		ft_putstr("Error, the number of arguments should be 16\n");
		return (1);
	}
	return (0);
}
