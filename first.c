#include <stdio.h>
#include <conio.h>
#define n 5
int stack[n];
int top = -1;
void push(int data)
{
    if (top == n - 1)
    {
        printf("over flow inmsertion not possible \n");
        return;
    }

    else
    {
        top++;
        stack[top] = data;
    }
}
 void pop()
{
    if (top == -1)
    {
        printf("undeflow so stack is empty");
        return;
    }
    else
    {
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        printf(" peek element is=%d \n", stack[top]);
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
        
    {
        printf("%d \t", stack[i]);
    }
    printf(" \n");
    printf("back word travesal\t");
    for (int i = top; i >= 0; i--)
    {
        printf("%d \t", stack[i]);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    peek();
    display();
    return 0;
}