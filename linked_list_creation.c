#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *head)
{
    while(head!= NULL)
    {
    printf("\nElement : %d",head->data);
    head= head->next;

    }

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

    printf("The data in first node is %d", head->data);
    linkedlisttraversal(head);


    return 0;
}