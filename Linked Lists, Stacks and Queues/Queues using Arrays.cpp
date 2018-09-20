#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
	int queues[10],front,rear;
public:
	queue()
	{
		front=0;
		rear=0;
	}
	void push()
	{  
		
	  if (rear>=10)
		cout<<"Queue is full."<<endl;
	  else
	   {  
		 cout<<"Enter data to push in Queue: ";
		 cin>>queues[rear];
		 if (rear!=0)
			rear++;
		 if ((front==0)&&(rear==0))
			rear++;
	     
	   }

      
	}

	void pop()
	{
		if((front!=10)||(front<rear))
			front++;
	}

	void display()
	{
		if(((front==0)&&(rear==0))||((front==10)||(front>rear-1)))
		{
		  front=rear=0;
		  cout<<"Queue is empty."<<endl;
		}
		else
		{
		  for(int i=front;i<rear;i++)
			cout<<queues[i]<<endl;
		}
	}
};

void main()
 {
	int x;
	char ch;
	queue q;

	do
	{
	 cout<<"Press 1 to Push in a Queue"<<endl;
	 cout<<"Press 2 to Pop from a Queue."<<endl;
	 cout<<"Press 3 to Display Queue."<<endl;
	 cin>>x;

	  switch(x)
	   {
	    case 1:
			q.push();
			break;

		case 2:
			q.pop();

		case 3:
			q.display();
	  }
	  cout<<"Do you want to function more? "<<endl;
	  ch=getch();
	  cout<<endl;
	}while(ch!='n'||ch!='N');
	cout<<endl;
	system("pause");
}