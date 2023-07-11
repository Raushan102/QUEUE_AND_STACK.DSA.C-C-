#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;

    if (front == NULL && rear == NULL)
    {
        newnode->next = NULL;
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        newnode->next = NULL;
        rear = newnode;
    }
}
void dequeue(){
    if(front == NULL && rear == NULL){
        printf("undeflow");

    }
    else{
        struct node * pen=front;
        front=front->next;
        free(pen);
    }
}

void display()
{
    if (front == NULL && rear == NULL)
    {
        printf("undeflow");
    }
    else
    {
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    enqueue(10);
     enqueue(10);
     enqueue(10);
      enqueue(10);
      dequeue();
      display();

    return 0;
}