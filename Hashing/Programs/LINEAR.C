#include<stdio.h>
#include<conio.h>
#define SIZE 11

void main()
{
 int arr[SIZE]={0},key,ch,i,j,loc;
clrscr();


  while(1)
   {
     printf("\nEnter the key :");
     scanf("%d",&key);

	loc=key%SIZE;

	if(arr[loc]==0)
	{
	   arr[loc]=key;
	}
	else
	{
	     j=loc+1;
	     if(j>=SIZE)
		   j=0;

	     while(j<SIZE)
	     {
		if(arr[j]==0)
		{
		  arr[j]=key;
		  break;
		}

		if(j==SIZE-1)
		   j=0;

		if(j==loc)
		   break;
		j++;
	     }

	}

     printf("\nDo you want to insert an element ? (1/0)");
     scanf("%d",&ch);

     if(ch==0)
       break;
   }


   printf("\n\nArray Elements .....\n");
   for(i=0;i<SIZE;i++)
   {

     printf("%d  ",arr[i]);
   }


getch();
}

