#ifndef _STAN_FH
#define _STAN_FH

#include <stdio.h>
#include <fcntl.h>

#define BUFSIZE 2014

ssize_t read_textfile(const char *filename, size_t letters);


#endif
