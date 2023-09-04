#include "main.h"
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
	int write;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(file, text_content, len);
	if (file == -1 || write == -1)
		return (-1);
	close(file);
	return (1);
}
