#include <iostream>
#include<stdlib.h>
using namespace std;
# define n 5
int stack[n];
int top=-1;

void push()
{
    int num;
    cout<<"Enter number :: ";
    cin>>num;
    if(top==n-1)
    {
        cout<<"Stack is full:: ";
    }
    else
    {
        top++;
        stack[top]=num;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"No element exists";
    }
    else
    {
        cout<<"The popped elelment is ::"<<stack[top];
        top--;
    }
    
}
void peek()
{
    cout<<"The top element is "<<stack[top];
}
void show()
{
    int it=top;
    while(it!=-1)
    {
        cout<<"Element is "<< stack[it];
        it--;
        
    }
}
int main()
{
    
    while(1)
    {
        int ch;
        cout<<"Enter your choice ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            show();
            break;
            case 5:
            exit(0);
        }
    }
    

    return 0;
}
