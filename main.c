#include <stdio.h>
#include "libft.h"

void *ft_add(void *lst1, void *lst2)
{
    
}

void ft_delet(void *content)
{
    free(content);
}

void ft_printlist(t_list *list)
{
    printf("List --> ");
    while (list)
    {
        printf("%d --> ", *((int *)list->content));
        list = list->next;
    }
    printf("NULL");
}

// list --> 2 --> 4 --> 3
// list --> 5 --> 6 --> 4

int main()
{
    t_list *list1 = NULL;
    t_list *list2 = NULL;
    t_list *result = NULL;
    t_list *node;
/*---------------------declar numbers-------------------------*/
    char *n1 = malloc(sizeof(int));
    if (!n1)
        return (1);
    char *n2 = malloc(sizeof(int));
    if (!n2)
        return (1);
    char *n3 = malloc(sizeof(int));
    if (!n3)
        return (1);
    *n1 = 2;
    *n2 = 4;
    *n3 = 3;
/*-------------------------creat list 1-----------------------------*/

    node = ft_lstnew((void *)n1);
     if (!node)
        return (1);
    ft_lstadd_back(&list1, node);
    node = ft_lstnew((void *)n2);
    if (!node)
        return (1);
    ft_lstadd_back(&list1, node);
    node = ft_lstnew((void *)n3);
    if (!node)
        return (1);
    ft_lstadd_back(&list1, node);
/*--------------------------------------------------------------------*/

/*------------------------declar numbers------------------------------*/
    char *nn1 = malloc(sizeof(int));
    if (!nn1)
        return (1);
    char *nn2 = malloc(sizeof(int));
    if (!nn2)
        return (1);
    char *nn3 = malloc(sizeof(int));
    if (!n3)
        return (1);
    *nn1 = 5;
    *nn2 = 6;
    *nn3 = 4;
/*--------------------------creat list 1-------------------------------*/

    node = ft_lstnew((void *)nn1);
     if (!node)
        return (1);
    ft_lstadd_back(&list2, node);
    node = ft_lstnew((void *)nn2);
    if (!node)
        return (1);
    ft_lstadd_back(&list2, node);
    node = ft_lstnew((void *)nn3);
    if (!node)
        return (1);
    ft_lstadd_back(&list2, node);
/*--------------------------------------------------------------------*/
    ft_printlist(list1);
    printf("\n");
    ft_printlist(list1);

    (void *)(*f)(void *) = ft_add;
    void (*del)(void *) = ft_delet;
    result = ft_lstmap(result, f, del);
}