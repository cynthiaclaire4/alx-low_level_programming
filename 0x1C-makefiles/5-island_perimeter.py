#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
    terrain = 1

    for i in range(height):
        for j in range(width):
            if grid[i][j] == terrain:
                size += 1
                if (j > 0 and grid[i][j -1] == terrain):
                    edges += 1
                if (i > 0 and grid[i -1][j] == terrain):
                    edges += 1
    return size * 4 - edges * 2
