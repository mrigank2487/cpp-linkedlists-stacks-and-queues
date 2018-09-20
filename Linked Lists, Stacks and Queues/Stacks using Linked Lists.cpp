#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
	struct node
	{
		int data;
		node *link;
	}*p;
public:
	stack()
	{
		p=NULL;
	}

	void push(int num)
	{
     node *temp;
	   if(p==NULL)
		 {
           temp=new node;
		   temp->data=num;
	       temp->link=NULL;
		   p=temp;
		 }

		 else
		 {
		   temp=new node;
		   temp->data=num;
		   temp->link=p;
		   p=temp;
		 }
	}

	void pop()
	{
   	     if(p!=NULL)
		  {
		   node *temp;
		   temp=p;
		   p=temp->link;  
		   delete temp;
		  }
	}

	void display()
	{
		node *temp;
		temp=p;
		if(p==NULL)
			cout<<"Stack is empty."<<endl;
		else
		{
			while(temp!=NULL)
			{
				cout<<endl<<temp->data<<endl;
				temp=temp->link;
			}
		}
	}
};
void main()
{
	int num,x;
	char ch;
	stack s;

	do
	{
	 cout<<"Press 1 to Push in a Stack."<<endl;
	 cout<<"Press 2 to Pop from a Stack."<<endl;
	 cout<<"Press 3 to Display Stack."<<endl;
	 cin>>x;

	  switch(x)
	   {
	    case 1:
			cout<<"Enter data to Push in a Stack: ";
			cin>>num;
			s.push(num);
			break;

		case 2:
			s.pop();

		case 3:
			s.display();
			break;
	  }
	  cout<<"Do you want to function more? "<<endl;
	  ch=getch();
	  cout<<endl;
	}while(ch!='n'||ch!='N');
	cout<<endl;
	system("pause");
}


  
