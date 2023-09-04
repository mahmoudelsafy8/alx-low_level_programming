#include "main.h"
/**
 * _strlen - len of str
 * @s: str
 * Return: 0
 */
int _strlen(char *s)
{
	int x = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		x++;
	return (x);
}
/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b = 0;
	ssize_t len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (len)
		b = write(file, text_content, len);
	close(file);
	return (b == len ? 1 : -1);
}
