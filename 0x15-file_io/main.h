#ifndef _STAN_FH
#define _STAN_FH

#include <stdio.h>
#include <fcntl.h>

#define BUFSIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);







#endif
