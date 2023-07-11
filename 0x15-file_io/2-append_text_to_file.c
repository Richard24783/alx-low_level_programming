#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the file's end
 * @filename: name of file
 * @text_content: Is NULL terminating string
 * @text_content: if NULL, add nothing, Return 1 if exist or -1 if not
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

		o = open(fileno, O_WRONLY | O_APPEND);
		w = write(o, text_content, len);

		if (o == -1 || w == -1)
			return (-1);

		close(o);

		return (1);
}
