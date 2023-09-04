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
	int open;
	int write;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	open = open(filename, O_WRONLY | O_APPEND);
	write = write(open, text_content, len);
	if (open == -1 || write == -1)
		return (-1);
	close(open);
	return (1);
}
