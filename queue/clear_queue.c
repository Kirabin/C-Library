#include "libft.h"

void	delete_queue(t_queue *queue, void (*delete)(void *))
{
	if (queue)
	{
		if (delete)
			delete(queue->content);
		free(queue);
	}
}

void	clear_queue(t_queue **queue, void (*delete)(void *))
{
	t_queue		*node;
	t_queue		*temp;

	if (queue)
	{
		node = *queue;
		while (node)
		{
			temp = node;
			node = node->next;
			delete_queue(temp, delete);
		}
		*queue = NULL;
	}
}
