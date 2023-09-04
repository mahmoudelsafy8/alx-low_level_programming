#include "main.h"
#define READ_BUF_SIZE 1024
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: filename is NULL return 0
 * write fails or does not write the expected amount of bytes
 * return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	b = read(file, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(file);
	return (b);
}
