#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island based on a grid:
    """
    island = 0
    edge = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                island += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edge += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edge += 1

    return island * 4 - edge * 2
