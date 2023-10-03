#include "main.h"

/**
 * append_text_to_file - A function that creates a file.
 * @filename: The filename used.
 * @text_content: The content in the file.
 * Return: 1 if file exists and -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_d, text_content, nletters);

		if (rwr == -1)
			return (-1);

	}

	close(file_d);

	return (1);
}
