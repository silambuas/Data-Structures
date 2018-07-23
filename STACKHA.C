#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAXSIZE 5
struct stack
{
 int stk[MAXSIZE];
 int top;
 };
 typedef struct stack STACK;
 STACK s;
 void push(void);
 int pop(void);
 void display(void);
 void main()
 {
  int ch;
  s.top=1;
  clrscr();
  printf("\nSTACK OPERATION\n");
  while(1)
  {
   printf("\n1.push\n2.pop\n3.display\n4.exit");
   printf("\n Enter choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:push();
    break;
    case 2:pop();
    break;
    case 3:display();
    break;
    case 4:exit(0);
    break;
    }
     fflush(stdin);
     }
    }
void push()
    {
     int num;
     if(s.top==MAXSIZE-1)
     {
      printf("\n Stack is empty!!!!!!!!");
      return;
     }
     else
     {
      printf("\n Enter the element to pushed : ");
      scanf("%d",&num);
      s.top=s.top+1;
      s.stk[s.top]=num;
      printf("\n Element inserted\n");
     }
     return;
     }
int pop()
     {
      int num;
     if(s.top==-1)
     {
      printf("\nStack is empty!!!!!!!!");
      return;
     }
     else
     {
      num=s.stk[s.top];
      printf("\npoped element is=%d",s.stk[s.top]);
      s.top=s.top-1;
     }
     return(num);
     }
void display()
      {
	int i;
	if(s.top==-1)
	{
	 printf("\nstack is empty\n");
	 return;
	}
	else
	{
	 printf("\nthe status of stack is\n");
	 for(i=s.top;i>0;i--)
	 {
	  printf("%d\n",s.stk[i]);
	 }
	 printf("\n");
	 }
      }



