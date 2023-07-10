#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t n_read, n_written;
    char *buffer;
    FILE *file;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        free(buffer);
        return (0);
    }

    n_read = fread(buffer, sizeof(char), letters, file);
    fclose(file);

    if (n_read == 0)
    {
        free(buffer);
        return (0);
    }

    n_written = fwrite(buffer, sizeof(char), n_read, stdout);
    free(buffer);

    if (n_written != n_read)
        return (0);

    return (n_written);
}
