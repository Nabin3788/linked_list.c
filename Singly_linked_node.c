
# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data =10;
    head->link = NULL;

    struct node *current =NULL;
    current = malloc(sizeof(struct node));
    current->data =13;
    current->link =NULL;
    head->link = current;
 return 0;
}