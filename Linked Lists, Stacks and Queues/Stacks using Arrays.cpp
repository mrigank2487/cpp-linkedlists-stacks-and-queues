#include<iostream>
#include<conio.h>
using namespace std;

class stack
{
	int stacks[10],top;
public:
	stack()
	{
		top=0;
	}

	void push()
	{
		cout<<"Enter data to Push in a Stack: ";
		cin>>stacks[top];
		top++;
		
	}

	void pop()
	{
		if(top!=0)
		   top--;
	}

	void display()
	{
		if(top==0)
			cout<<"Stack is empty."<<endl;
		else
		
		{
		//  top=top-1;
		  for(int i=top-1;i>=0;i--)
			cout<<stacks[i]<<endl;
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
			s.push();
			break;

		case 2:
			s.pop();

		case 3:
			s.display();

	  }
	  cout<<"Do you want to function more? "<<endl;
	  ch=getch();
	  cout<<endl;
	}while(ch!='n'||ch!='N');
	cout<<endl;
	system("pause");
}
