#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int plus, j, wr;

if (filename == NULL)
return (-1);

plus = open(filename, 0_WRONLY | 0_APPEND);
if (plus == NULL)
return (-1);
if (text_content == NULL)
return (1);
for (j = 0; text_content[j]; j++)
;
wr = write(plus, text_content, j);
close(plus);
return (wr == -1 ? -1 : 1);
}
