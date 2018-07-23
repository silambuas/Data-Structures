#include<math.h>
#include<stdio.h>
#include<conio.h>
#define MAX 17
typedef struct node
{
 int coeff;
 struct node *next;
}node;
node *init();
void read(node *h1);
void print(node *h1);
void add(node *h1,node *h2);
void multiply(node *h1,node *h2);
void main()
{
 node *h1 = NULL,*h2=NULL;
 clrscr();
 printf("\n Create 1st Polynomial");
 h1=init();
 read(h1);
 printf("\n Create and polynomial");
 h2=init();
 read(h2);
 printf("\n 1st Polynomial ->");
 print(h1);
 getch();
 add(h1,h2);
 getch();
}
void read(node *h)
{
 int n,i,j,power,coeff;
 node *p;
 p=init();
 printf("\n Enter number of terms : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n ENter term %d",i+1);
  printf("\n Enter power : ");
  scanf("%d",&power);
  printf("\n Enter coeff : ");
  scanf("%d",&coeff);
  for(p=h, j=0;j<power;j++)
  { p=p->next;}
  p->coeff = coeff;
 }
}
void print(node *p)
{
 int i;
 for(i=0;p!=NULL;i++,p=p->next)
 {
  if(p -> coeff !=0)
  { printf("%d x %d",p->coeff,i);}
 }
}
void add(node *h1,node *h2)
{
 node *h3,*p;
 h3=init();
 p=h3;
 while(h1 != NULL)
 {
  h3->coeff = h1->coeff + h2->coeff;
  h1 = h1->next;
  h2 = h2->next;
  h3 = h3->next;
 }
 printf("\n Sum of the Polynomials \n ");
 print(p);
}
void multiply(node *h1,node *h2)
{
 node *h3, *p, *q, *r;
 int i,j,k,coeff,power;
 h3 = init();
 for(p=h1,i=0;p!=NULL;p=p->next,i++)
 {
  for(q=h2,j=0;q!=NULL;q=q->next,j++)
  {
   coeff = p->coeff * q->coeff;
   power = i+j;
   for(r=h3,k=0;k<power;k++)
   {
    r=r->next;
   }
   r->coeff = r->coeff + coeff;
  }
 }
 printf("\n Multiplication of Polynomials \n ");
 print(h3);
}
node *init()
{
 int i;node *h =NULL,*p;
 for(i=0;i<MAX;i++)
 {
  p=(node *)malloc(sizeof(node));
  p->next = h;
  p->coeff = 0;
  h=p;
 }
 return(h);
}