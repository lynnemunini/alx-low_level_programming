#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: file to open
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	fd  = open(filename, O_RDONLY, letters);

	if (fd == -1 || fd == NULL)
	{
		return(0);
	}
	
}
