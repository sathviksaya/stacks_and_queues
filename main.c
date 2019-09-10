#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node node;

void push(node *ref, int data)
{
    node *temp = (node*)malloc(sizeof(node));
    if(!temp)
    {
        printf("Memory is not allocated!! - \(stack overflow\)\n");
    }
    else
    {
        temp->data = data;
        temp->link = ref->link;
        ref->link = temp;
    }
}

void peek(node *ref)
{
    printf("Top node has :- %d\n", ref->link->data);
}

void pop(node *ref)
{
    node *temp = ref->link;
    if(ref->link == NULL)
    {
        printf("STACK IS EMPTY - \(stack underflow\)\n");
    }
    else
    {
        ref->link = temp->link;
        printf("%d - node removed\n", temp->data);
        free(temp);
    }
}

void display(node *ref)
{
    node *temp = ref->link;
    if(ref->link == NULL)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->link;
        }
        printf("NULL\n");
    }
}

int main()
{
    node *head = (node*)malloc(sizeof(node));
    head->link = NULL;
    display(head);
    push(head, 10);
    display(head);
    peek(head);
    push(head, 20);
    display(head);
    peek(head);
    push(head, 30);
    display(head);
    peek(head);
    pop(head);
    peek(head);
    display(head);
}
