#include<iostream>
#include<conio.h>
using namespace std;

class queue
{
	struct node
	{
		int data;
		node *link;
	}*front,*rear;

public:
	queue()
	{
	    front=NULL;
		rear=NULL;
	}
	void push(int num)
	{
		if((front==NULL)&&(rear==NULL))
		{
			node *temp;
			temp=new node;
			temp->data=num;
			temp->link=NULL;
			front=rear=temp;
		}
		else
		{
			node *temp;
			temp=new node;
			temp->data=num;
			temp->link=NULL;
			rear->link=temp;
			rear=temp;
		}
	}

	void pop()
	{
		if(front!=NULL)
		{
		 node *temp;
		 temp=front;
		 front=front->link;
		 delete temp;
		}
	}

	void display()
	{
		node *temp;
		temp=front;
		if(front==NULL)
			cout<<"Queue is empty."<<endl;
		else
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->link;
		}
	}
};

void main()
 {
	int num,x;
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
			cout<<"Enter data to Push in a Queue: ";
			cin>>num;
			q.push(num);
			break;

		case 2:
			q.pop();

		case 3:
			q.display();
			break;
	  }
	  cout<<"Do you want to function more? "<<endl;
	  ch=getch();
	  cout<<endl;
	}while(ch!='n'||ch!='N');
	cout<<endl;
	system("pause");
}
