#!/usr/bin/python3
"""Module Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    y1 = 0
    y2 = 0
    x1 = 100
    x2 = 0
    for ycount, y in enumerate(grid):
        if y1 == 0 and 1 in y:
            y1 = ycount + 1
        if 1 in y:
            y2 = ycount + 1

        for xindex, x in enumerate(y):
            if x == 1:
                if x2 < xindex:
                    x2 = xindex + 1
                if x1 > xindex:
                    x1 = xindex + 1

    if x1 == 100:
        x1 = 0

    ylength = (y2 - y1) + 1
    xlength = (x2 - x1) + 1

    if x1 == 0 and x2 == 0:
        xlength = 0
    if y1 == 0 and y2 == 0:
        ylength = 0

    return (ylength * 2) + (xlength * 2)
