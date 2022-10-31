#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - read from a text file
 * @filename:  name of the file
 * @letters: the number of character to be printed
 *
 * Return: the number of character sucessfully writen out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *reads;
	int rd, op, wr;

	op = open(filename, O_RDONLY);
	reads = malloc(letters + 1);

	if (reads == NULL)
	{
		free(reads);
	}
	if (op != -1 && filename)
	{
		rd = read(op, reads, letters);
		reads[rd] = '\0';
		if (rd != -1)
		{
			wr = write(STDOUT_FILENO, reads, rd);
			if (wr == -1)
			{																			return (0);
			}
			free(reads);
			close(op);
			return (wr);
		}
		free(reads);
		close(op);
		return (0);
	}
	return (0);
}

