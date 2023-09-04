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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b = 0;
	ssize_t len = _strlen(text_conten);

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRINLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
		b = write(file, text_content, len);
	close(file);
	return (b == len ? 1 : -1);
}
