#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define N 5
int queue[N];
int rear = -1;
int front = -1;
void enqueue(int data)
{
    if (rear == N - 1)
    {
        printf("queue is full insertion not possible\n");
        return;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
    if (front == -1)
    {

        front++;
    }
}
void dequeue()
{
    if (front == N - 1 || front > rear)
    {
        printf("queue is empty");
    }
    else
    {
        front++;
    }
}
int peek()
{
    if (front > rear || front == N - 1)
    {
        printf("queue in empty");
    }
    else
    {
        return (queue[rear]);
    }
}
bool empty()
{
    if (front == -1 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{

    for (int i = front; i <= rear; i++)
    {
        printf("%d \t", queue[i]);
    }
}

int main()

{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    dequeue();

    dequeue();

    printf("element is queue \n");
    display();

    printf(" peek element is %d\n", peek());
    printf(" after check empty %d\n", empty());

    return 0;
}