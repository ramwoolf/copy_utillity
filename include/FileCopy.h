#ifndef FILE_COPY_H
#define FILE_COPY_H

#include <iostream>
#include <sys/sendfile.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

class FileCopy
{
public:
	size_t operator()(const char *, const char *);
};

#endif