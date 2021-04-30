#include "libft.h"

void	put_queue(t_queue *queue, void (*put)(void *content))
{
	if (queue)
	{
		while (queue)
		{
			put(queue->content);
			queue = queue->next;
		}
	}
	else
	{
		put_string("(null)\n");
	}
}
