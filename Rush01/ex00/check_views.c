/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluz-ste <gluz-ste@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:46:59 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/10 16:47:02 by gluz-ste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

int	check_row_left(int grid[GRID_SIZE][GRID_SIZE], int row, int clue)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (i < GRID_SIZE)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			count++;
		}
		i++;
	}
	return (count == clue);
}

int	check_row_right(int grid[GRID_SIZE][GRID_SIZE], int row, int clue)
{
	int	i;
	int	count;
	int	max_height;

	i = GRID_SIZE - 1;
	count = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			count++;
		}
		i--;
	}
	return (count == clue);
}

int	check_col_up(int grid[GRID_SIZE][GRID_SIZE], int col, int clue)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (i < GRID_SIZE)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			count++;
		}
		i++;
	}
	return (count == clue);
}

int	check_col_down(int grid[GRID_SIZE][GRID_SIZE], int col, int clue)
{
	int	i;
	int	count;
	int	max_height;

	i = GRID_SIZE - 1;
	count = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			count++;
		}
		i--;
	}
	return (count == clue);
}
