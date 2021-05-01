#include "libft.h"

t_queue	*new_queue(void	*content)
{
	t_queue		*node;

	node = malloc(sizeof(t_queue));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_queue		*queue;
// 	t_queue		*poped;

// 	queue = NULL;
// 	push_queue(&queue, new_queue(_strdup("1")));
// 	push_queue(&queue, new_queue(_strdup("2")));
// 	push_queue(&queue, new_queue(_strdup("3")));
// 	push_queue(&queue, new_queue(_strdup("4")));
// 	poped = pop_queue(&queue);
// 	put_string("poped: ");
// 	put_queue(poped, put_void_string_endl);
// 	put_string("\n");
// 	delete_queue(poped, free);
// 	put_string("queue: ");
// 	put_queue(queue, put_void_string_endl);
// 	put_string("\n");
// 	clear_queue(&queue, free);
// 	return (0);
// }
