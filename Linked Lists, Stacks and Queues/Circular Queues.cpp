#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
	int queues[5],front,rear;
public:
	queue()
	{
		front=rear=-1;
	}
	void push()
	{  
	  if((rear==-1)&&(front==-1))
	  {
		front=rear=0;
	    cout<<"Enter data to push in Queue: ";
		cin>>queues[rear];
		cout<<"FRONT ="<<front;
		cout<<"\nREAR ="<<rear<<endl;
	  }
	  else
	   {  
		  
		   if((rear>=4)&&(front==0))
		   {
			   cout<<"Queue if full";
				return;
		   }
		   else if((front>0)&&(rear==4))
		   {
			   rear=0;
			   cout<<"Enter data to push in Queue: ";
		       cin>>queues[rear];
		       cout<<"FRONT ="<<front;
		       cout<<"\nREAR ="<<rear;
			   
		   }
		   else
		   {
		   rear++;
		   if (rear==front)
	            {
		         cout<<"Queue is full."<<endl;
	             rear--;
			
		        }
		   else
		   {
		   cout<<"Enter data to push in Queue: ";
		   cin>>queues[rear];
		   cout<<"FRONT ="<<front;
		   cout<<"\nREAR ="<<rear;
		   }
		   }
	   }  
	}

	void pop()
	{
		if((front==-1)&&(rear==-1))
		{
			cout<<"FRONT ="<<front;
		    cout<<"\nREAR ="<<rear<<endl;
			//cout<<"Queue is empty."<<endl;
			return;
		}
		else if((front!=4)||(front<rear))
		{
			cout<<"FRONT ="<<front;
		cout<<"\nREAR ="<<rear<<endl;
			cout<<"Popped value is: "<<queues[front]<<endl;
			front++;

			 if(front==rear)
		{
			front=rear=-1;
	cout<<"FRONT ="<<front;
		cout<<"\nREAR ="<<rear<<endl;
		}

			//cout<<"FRONT ="<<front;
		    //cout<<"\nREAR ="<<rear<<endl;
		}
		else if (front==4)
		{
			front=0;
			cout<<"FRONT ="<<front;
		cout<<"\nREAR ="<<rear<<endl;
		}
	/*	else if(front>rear)
		{
			front=rear=-1;
	cout<<"FRONT ="<<front;
		cout<<"\nREAR ="<<rear<<endl;
		}*/
		
	}

	void display()
	{
		if((front==-1)&&(rear==-1))
		{
		  //front=rear=0;
		  cout<<"Queue is empty."<<endl;
		}
		else
		{
			if (front<rear)
		      for(int i=front;i<rear+1;i++)
			     cout<<queues[i]<<endl;
			else if (front>rear)
			{
			  for(int i=front;i<=4;i++)
				  cout<<queues[i]<<endl;
			  for (int i=0;i<=rear+1;i++)
				  cout<<queues[i]<<endl;;
			}
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