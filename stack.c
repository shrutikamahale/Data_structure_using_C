//implimentation of stack using an array.
#include<stdio.h>
#define N 5
void push();
void pop();
void peek();
void display();
int main()
{
  int ch;
  do
  {
    printf("\nEnter choice: 1.Push 2.Pop 3.Peek 4.Display");
    scanf("%d", &ch);
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
            display();
            break;
      default:
            printf("Enter Invalid Choice");
    }
  }while(ch != 0);
}
void push()
{
  int x;
  int top = -1;
  int stack[N];
  printf("Enter an element: ");
  scanf("%d", &x);
  if(top == N-1)
  {
    printf("Stack Overflow....");
  }
  else
  {
    top++;
    stack [top] = x;
  }
}
void pop()
{
  int item;
  int stack[N];
  int top;
  if(top == -1)
  {
    printf("Stack underflow....");
  }
  else
  {
    item = stack[top];
    top--;
    printf("%d", item); 
  }
}
void peek()
{
  int top;
  int stack[N];
  if(top == -1)
  {
    printf("Stack is_empty..");
  }
  else
  {
    printf("%d", stack[top]);
  }
}
void display()
{
  int i;
  int stack[N];
  int top;
  for(i = top; i >= 0; i--)
  {
    printf("%d",stack[i]);
  }
}


