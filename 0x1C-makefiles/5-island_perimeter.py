#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island based on a grid:
    """

    count = 0
    for row in range(len(grid)):
        for j in range(len(grid[row])):
            if grid[row][j] == 1:
                if row == 0 or grid[row - 1][j] == 0:
                    count += 1
                if j == 0 or grid[row][j - 1] == 0:
                    count += 1
                if row == len(grid) - 1 or grid[j + 1][row] == 0:
                    count += 1
                if j == len(grid[row]) - 1 or grid[row + 1][j] == 0:
                    count += 1

    return count
