#include "libft.h"

void	put_void_int(void *arg, char *end)
{
	put_int(*(int *)arg);
	put_string(end);
}

void	put_void_string(void *arg, char *end)
{
	put_string((char *)arg);
	put_string(end);
}
