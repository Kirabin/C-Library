#include "libft.h"

void	put_queue(t_queue *queue, void (*put)(void *content, char *end),
			char *sep, char *end)
{
	if (queue)
	{
		while (queue)
		{
			put(queue->content, sep);
			queue = queue->next;
		}
	}
	else
	{
		put_string("(null)");
	}
	put_string(end);
}
