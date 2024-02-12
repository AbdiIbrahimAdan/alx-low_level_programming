#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_textfile - that appends text at the end of a file
 * @fname: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_textfile(const char *fname, char *text_content)
{
	int i = 0, file;

	if (fname == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(fname, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
