#include "../include/FileCopy.h"

size_t FileCopy::operator()(const char *source_name, const char *dest_name)
{
	std::cout << "Source: " << source_name << std::endl;
	std::cout << "Destination: " << dest_name << std::endl;
	int source = open(source_name, O_RDONLY, 0);
	int dest = open(dest_name, O_WRONLY | O_CREAT, 0644);

	struct stat stat_source;
	fstat(source, &stat_source);

	auto result = sendfile(dest, source, 0, stat_source.st_size);

	close(source);
	close(dest);

	return result;
}