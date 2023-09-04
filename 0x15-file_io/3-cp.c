#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERROR_WRITE "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERROR_CLOSE "Error: Can't close fd FD_VALUE %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUF_SIZE 1024
/**
 * main - check the code
 * @ac: count
 * @av: vector
 * Return: 1 on success and -1 on failure
 */
int main(int ac, char **av)
{
	int in_file = 0;
	int to_file = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	in_file = open(av[1], O_RDONLY);
	if (in_file == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);
	to_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_file == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);
	while ((b = read(in_file, buf, READ_BUF_SIZE)) > 0)
		if (write(to_file, buf, b) != b)
			dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);
	in_file = close(in_file);
	to_file = close(to_file);
	if (in_file)
		dprintf(STDERR_FILENO, ERROR_CLOSE, in_file), exit(100);
	if (to_file)
		dprintf(STDERR_FILENO, ERROR_CLOSE, in_file), exit(100);
	return (EXIT_SUCCESS);
}
