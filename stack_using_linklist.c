#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = top;
    top = newnode;
}
void display()
{
    if (top == NULL)
    {
        printf("undeflow");
    }
    else
    {
        struct node *temp = top;
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
    }
}
void pop()
{
    struct node *temp = top;
    int keep = top->data;
    top = top->next;
    free(temp);
    printf("pop elementis=%d\t", keep);
}
bool empty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    push(23);
    push(24);
    push(24);

    pop();
    display();
    printf(" list is null or not is=%d", empty());

    return 0;
}