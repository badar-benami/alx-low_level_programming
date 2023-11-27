#include "main.h"

/**
 * append_text_to_file---Text is appended to a file at the end.
 * @filename:a reference to the filename.
 * @text_content:The text to append to the end of the document.
 *
 * Return:If the filename is NULL or the function fails-one.
 *        The user does not have write rights if the file does not exist-one.
 *        Otherwise-one.
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
