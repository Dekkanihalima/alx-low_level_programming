#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file to read
 * @letters: maximum number of letters to read
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    ssize_t let, w;
    char *text;

    if (filename == NULL)
        return (0);

    text = malloc(sizeof(char) * (letters + 1));
    if (text == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        free(text);
        return (0);
    }

    let = read(file, text, letters);
    if (let == -1)
    {
        free(text);
        close(file);
        return (0);
    }

    w = write(STDOUT_FILENO, text, let);
    if (w == -1 || w != let)
    {
        free(text);
        close(file);
        return (0);
    }

    free(text);
    close(file);

    return (let);
}

