#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_ buffer(char*file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes
 * @file: The name of the file
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	
	char *buffer;

	buffer = malloc(sizeof(char)* 1024);

	if (buffer == NULL)
	{
	 	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n",file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descrip.
 */
void close_file(int fd)
{	
	int c;
	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't c lose fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents to another
 * @argc - The number of arguments
 * @argv: An array of pointers to the argc
 * Return: 0 if sucessful.
 * Description: if the arguments is incorrect - exit code 97.
 * if file_from does not exist or cannot be read - exit code 98.
 * if file_to of file from cannot be closed - exit code100
 * if file_to cannot be created or written to - exit code 99
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,0664);

	do{
		if(from == -1 || r == -1)
		{
			dprint(STDERR_FILENO,

				"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
		}
	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]); free(buffer);
	exit(99);
	}

	r = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

	}while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
