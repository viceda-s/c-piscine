/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluz-ste <gluz-ste@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:49:26 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/10 16:49:29 by gluz-ste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

void	ft_putstr(char *str);

void	print_row(int grid[GRID_SIZE][GRID_SIZE], int row)
{
	int		col;
	char	num[2];

	col = 0;
	num[1] = '\0';
	while (col < GRID_SIZE)
	{
		num[0] = grid[row][col] + '0';
		ft_putstr(num);
		if (col < GRID_SIZE - 1)
			ft_putstr(" ");
		col++;
	}
	ft_putstr("\n");
}

void	print_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int	row;

	row = 0;
	while (row < GRID_SIZE)
	{
		print_row(grid, row);
		row++;
	}
}
