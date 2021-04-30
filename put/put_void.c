#include "libft.h"

void	put_void_int_endl(void *arg)
{
	put_int(*(int *)arg);
	put_string("\n");
}

void	put_void_int_space(void *arg)
{
	put_int(*(int *)arg);
	put_string(" ");
}

void	put_void_string_endl(void *arg)
{
	put_string((char *)arg);
	put_string("\n");
}

void	put_void_string_space(void *arg)
{
	put_string((char *)arg);
	put_string(" ");
}
