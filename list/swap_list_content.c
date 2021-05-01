#include "libft.h"

void	swap_list_content(t_list *a, t_list *b)
{
	void	*temp;
	bool	f;

	f = a->flag;
	a->flag = b->flag;
	b->flag = f;
	temp = a->content;
	a->content = b->content;
	b->content = temp;
}
