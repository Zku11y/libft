#include "libft.h"
#include <stdio.h>


void *f(void *content)
{
    int *a = malloc(sizeof(int));
    *a = *(int *)content * -1;
    return (a);
}

int main()
{
    int a = 1;
    int count = 10;
    t_list *list;
    t_list *list2;
    t_list *ptr;
    t_list *ptr2;

    list = ft_lstnew(&a);
    a++;
    while(a <= count)
    {
        int *ptr_a = malloc(sizeof(int));
        *ptr_a = a;
        ft_lstadd_back(&list, ft_lstnew(ptr_a));
        a++;
    }
    ptr = list;
    a = 1;
    list2 = ft_lstmap(list, f, free);
    ptr = list;
    ptr2 = list2;
    while(ptr)
    {
        printf("%d\n", *(int *)(ptr->content));
        ptr = ptr->next;
    }
    while(ptr2)
    {
        printf("%d\n", *(int *)(ptr2->content));
        ptr2 = ptr2->next;
    }
}