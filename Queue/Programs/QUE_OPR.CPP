#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

void insert(int [],int &,int &,int);
void del(int [],int &,int & );
void disp(int [],int ,int);

void main()
{
 int Q[SIZE];
 int F=-1, R=-1;
 int ch, item;
 clrscr();
		do
		{
		  clrscr();
		  printf("\n 1 for Insert");
		  printf("\n 2 for Delete");
		  printf("\n 3 for Display");
		  printf("\n 4 for Exit");
		  printf("\n\t Enter choice:");
		  scanf("%d", &ch);

		    switch(ch)
		    {
		      case 1 : printf("\n\t Enter item for insertion:");
			       scanf("%d", &item);
			       insert( Q,F, R, item);
			       getch();
			       break;

		      case 2 : del(Q, F, R);
			       break;

		      case 3 : disp(Q, F, R);
			       getch();
			       break;

		      case 4 : printf("\n\t Thanks...!");
			       getch();
			       exit(0);
			       break;

		      default :printf("\n\t Wrong choice...!");
			       getch();
			       break;
		    }
		}while(ch!=4);
getch();
}
void insert(int Q[],int &F,int &R,int item)
{
   if(R == SIZE-1)
   {
     printf("\n\nQueue Overflow !.....");
     getch();
     return;
   }
   if(F==-1 && R==-1)
     F=R=0;
   else
     R++;

   Q[R]=item;

   printf("\nFront : %d \tRear : %d",F,R);

   printf("\n\n%d is inserted !....",item);

}

void del(int Q[],int &F,int &R)
{
   int item;

   if(F==R)
     F=R=-1;

   if(F==-1 && R==-1)
   {
     printf("\n\nQueue Underflow !.....");
     getch();
     return;
   }
   else
   {
    item=Q[F];
    F++;
   }

   printf("\nFront : %d \tRear : %d",F,R);
   printf("\n\n%d is deleted !....",item);
   getch();

}
void disp(int Q[],int F,int R)
{
  int i;
  if (F==-1 && R==-1)
  {
     printf("\n\nQueue is empty!.....");
     getch();
     return;
  }
  printf("\n\n");
  for(i=F;i<R;i++)
  {
   printf(" %d ",Q[i]);
  }
}

