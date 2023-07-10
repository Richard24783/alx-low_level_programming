#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: NULL terminated string to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written = 0;

	if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	n_written = write(fd, text_content, strlen(text_content));

	close(fd);

	return (n_written == -1 ? -1 : 1);
}
