#include <iostream>

using namespace std;

int stack[5];
int top = -1;
void push(int n)
{

    if (top == 4)
    {
        cout << "overflow";
    }
    else
    {
        top++;
        stack[top] = n;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "pop  not possible";
    }
    else
    {
        int temp = stack[top];
        top--;
         cout<<"pop element is="<<temp<<'\n';
    }
}
void peek(){
    if(top==-1){
        cout<<"undeflow";
        
    }
    else{
        cout<<"peek n umber"<<peek<<'\n';
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(6);
   
    pop();
     
    display();
      peek();

    return 0;
}