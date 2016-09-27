#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	list = begin_list;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
