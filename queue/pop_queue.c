#include "libft.h"

t_queue	*pop_queue(t_queue **queue)
{
	t_queue		*node;

	node = NULL;
	if (queue)
	{
		node = *queue;
		*queue = (*queue)->next;
		node->next = NULL;
	}
	return (node);
}
