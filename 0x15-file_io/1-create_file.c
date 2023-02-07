#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to be placed inside the file
 * Return: 1 on success and -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t check = 0;

	if (file == -1 || text_content == NULL)
	{
		perror("fails");
		return (-1);
	}
	if (filename == NULL)
	{
		perror("fails");
		return (-1);
	}
	check = write(file, text_content, strlen(text_content));
	if (check == -1)
	{
		perror("fails");
		return (-1);
	}
	close(file);
	return (1);
}
