#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **_gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	_gridout = malloc(height * sizeof(int *));
	if (_gridout == NULL)
	{
		free(_gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		_gridout[i] = malloc(width * sizeof(int));
		if (_gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(_gridout[i]);
			free(_gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			_gridout[i][j] = 0;

	return (_gridout);
}
