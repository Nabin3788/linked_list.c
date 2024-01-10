#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nElement : %d", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insert(struct node *link)
{
    struct node *ptr;
    int index = 2;

    ptr = malloc(sizeof(struct node));
    struct node *p = link;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = 1;
    ptr->next = p->next;
    p->next = ptr;
    return link;
}

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    struct node *second;
    second = malloc(sizeof(struct node));
    struct node *third;
    third = malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = NULL;

    head = insert(head);

    printf("The data in first node is %d", head->data);
    linkedlisttraversal(head);

    return 0;
}