#include<iostream.h>
#include<conio.h>
#include<process.h>
#define SIZE 10
void main()
{
     int data[SIZE]= {0},n=0,i,j,k,temp;
clrscr();
   cout<<"\n\tEnter How Many nos U want to Enter :-->";
   cin>>n;


   for(i=0;i<n;i++)
   {
	cout<<"Enter No "<<i+1<<":-->";
	cin>>data[i];
  }

//Logic of Bubble Sort
   for(i=0;i<n;i++)
   {
	for(j=0;j<n-i-1;j++)
	{
		if(data[j]>data[j+1])
		{
			temp=data[j];
			data[j]=data[j+1];
			data[j+1]=temp;
		}
	}
	   cout<<"\n\t\tPass"<<i<<"...";
	   for(k=0;k<n;k++)
	   {
		cout<<" "<<data[k]<<" ";
	   }
  }

   cout<<"\n\tAfter Sorting...\n\t";
   for(i=0;i<n;i++)
   {
	cout<<" "<<data[i ]<<" ";
   }


getch();
}



