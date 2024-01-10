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
struct node *deletion(struct node * head)

{

struct node *p=head;
struct node *q =p->next;

while(q!=NULL )
{
    p=p->next;
    q=q->next;
}
p->next =NULL;
free(q);

return ;

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

    head = deletion(head);

    printf("The data in first node is %d", head->data);
    linkedlisttraversal(head);


    return 0;
}