#!/usr/bin/python3

"""
Title: Island Perimeter
Description: a function that returns the perimeter of the island
            described in grid
Author: @a_idk
"""


def island_perimeter(grid):
    """ Method that returns the perimeter of an island
    Arg:
        grid = list of list of integers
            - 0: water zone
            - 1: land zone
    Instructions:
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically
            - Grid is rectangular
            - width and height don’t exceed 100
            - Grid is completely surrounded by water (1 island or nothing)
            - The island doesn’t have “lakes”.
    """
    result = 0  # setting the initial value of perimeter to zero

    for idx in range(len(grid)):
        for idx2 in range(len(grid[idx])):
            if grid[idx][idx2] == 1:
                result = result + 4
                if ((idx > 0) and (grid[idx - 1][idx2] == 1)):
                    result = result - 2
                if ((idx > 0) and (grid[idx][idx2 - 1] == 1)):
                    result = result - 2
    return result
    """
    perimeter = 0
    # flat = []  # flatten 2D grid to 1D list
    count = 0

    for idx in range(len(grid)):
        for idx2 in range(len(grid[idx])):
            flat.append(grid[idx][idx2])
            # if grid[idx][idx2] == 1:
            #    count = count + 1

    for idx in range(len(flat)):
        if (idx > 0) and (idx < len(flat) - 1):
            if flat[idx] == 0 and flat[idx + 1] == 1 or
            flat[idx] == 0 and flat[idx - 1] == 1:
            #if (flat[idx] == 0 and flat[idx - 1] == 1):
            #    perimeter = perimeter + 1
            #elif (flat[idx] == 0 and flat[idx + 1] == 1):
                perimeter = perimeter + 1

    if perimeter % 2 == 0:
        perimeter = perimeter * 2
    else:
        perimeter = (2 * perimeter) - 1
    return perimeter"""
