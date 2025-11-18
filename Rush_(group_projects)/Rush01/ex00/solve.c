/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:48:01 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/11 23:35:42 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

int	is_valid(int grid[GRID_SIZE][GRID_SIZE], int *pos, int *clues);

int	find_empty(int grid[GRID_SIZE][GRID_SIZE], int *row, int *col)
{
	*row = 0;
	while (*row < GRID_SIZE)
	{
		*col = 0;
		while (*col < GRID_SIZE)
		{
			if (grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	solve(int grid[GRID_SIZE][GRID_SIZE], int *clues)
{
	int	pos[2];
	int	num;
	int	pos_arr[3];

	if (!find_empty(grid, &pos[0], &pos[1]))
		return (1);
	num = 1;
	while (num <= GRID_SIZE)
	{
		pos_arr[0] = pos[0];
		pos_arr[1] = pos[1];
		pos_arr[2] = num;
		if (is_valid(grid, pos_arr, clues))
		{
			grid[pos[0]][pos[1]] = num;
			if (solve(grid, clues))
				return (1);
			grid[pos[0]][pos[1]] = 0;
		}
		num++;
	}
	return (0);
}
