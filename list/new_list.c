#include "libft.h"

t_list	*new_list(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->flag = false;
	node->content = content;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

t_list	*new_list_int(int a)
{
	t_list	*node;
	int		*content;

	content = malloc(sizeof(int));
	if (!content)
		return (NULL);
	*content = a;
	node = malloc(sizeof(t_list));
	if (!node)
	{
		free(content);
		return (NULL);
	}
	node->flag = false;
	node->content = content;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

// void	put_void_string(void *arg)
// {
// 	char	*n;

// 	n = (char *)arg;
// 	put_string(n);
// 	put_string("\n");
// }
// gcc -I. libft.a list/*.c -g
// int	main(int argc, char const *argv[])
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = NULL;
// 	printf("%d\n", list_size(list));
// 	list_add_front(&list, new_list(_strdup("111")));
// 	put_list_forward(list, put_void_string);
// 	printf("%d\n", list_size(list));
// 	list_add_front(&list, new_list(_strdup("222")));
// 	put_list_forward(list, put_void_string);
// 	printf("%d\n", list_size(list));
// 	list_add_front(&list, new_list(_strdup("333")));
// 	put_list_forward(list, put_void_string);
// 	printf("%d\n", list_size(list));
// 	list_add_front(&list, new_list(_strdup("444")));
// 	put_list_forward(list, put_void_string);
// 	printf("%d\n", list_size(list));
// 	clear_list(&list, free);
// 	return (0);
// }
