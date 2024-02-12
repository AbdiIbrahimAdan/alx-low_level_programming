#ifndef FILE_IO
#define FILE_IO

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_text_file(const char *fname, size_t letters);
int make_file(const char *fname, char *text_content);
int append_textfile(const char *fname, char *text_content);

#endif
