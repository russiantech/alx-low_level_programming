#include "main.h"

/**
 * append_text_to_file - will add text at the end of a file.
 * @filename: pointer this file in question.
 * @text_content: str to be appended to @filename.
 *
 * Return: If append_text_to_file fails or @filename= NULL - -1.
 *         If @filename not found, then no write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
