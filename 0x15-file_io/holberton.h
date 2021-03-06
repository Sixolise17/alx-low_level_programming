#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* _HOLBERTON_H */
