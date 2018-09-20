#include<iostream>
using namespace std;
class stack
{
	int stacks[30],top;
public:
	stack()
	{
		top=0;
	}

	int gettop()
	{
		return (top);
	}

	int getstack()
	{
		return(stacks[top]);
	}

	void decrememt_stack_pointer()
	{
		top--;
	}

	void push(char x)
	{
		stacks[top]=x;
		top++;
		cout<<"Pushed Top= "<<top<<endl;
	}

	int pop()
	{
		if(top!=0)
		  top--;
		cout<<"Popped Top= "<<top<<endl;
		  return (stacks[top]);
	}

	int precedence(char y)
	{
		if(y==')')
			return(6);
		if(y=='(')
			return (5);
		if((y=='$')||(y=='^'))
			return (4);
		if((y=='*')||(y=='/'))
			return (3);
		if((y=='+')||(y=='-'))
			return (2);
	}

};
void main()
{
	stack s;
	int i=0,j=0,op1=0,op2=0;
	char in[30],out[30];
	cout<<"Enter equation: ";
	gets(in);

	while(in[i]!='\0')
	{
		if ((in[i]=='+')||(in[i]=='-')||(in[i]=='*')||(in[i]=='/')||(in[i]=='$')||(in[i]=='^')||(in[i]=='(')||(in[i]==')'))
		{
			if (in[i]=='(')
			{
				s.push(in[i]);
				i++;
				continue;
			}
			if(in[i]==')')
			{
				while(s.getstack()!='(')
				{
					out[j]=s.pop(); cout<<out[j]<<endl;
					j++; 
					s.decrememt_stack_pointer();
					 break;
				}
				
				i++;
				continue;
			}
			if(s.gettop()==0)      //If returned top is 0, Stack is empty
				s.push(in[i]);
			else
			{
				op1=s.precedence(in[i]);
				op2=s.precedence(s.getstack());
				if(op2==5)
					s.push(in[i]);
				else
					if(op2>=op1)
					{
					  out[j]=s.pop(); cout<<out[j]<<endl;
					}
				    else 
					  s.push(in[i]);
			}
		}
		else
		{
		 out[j]=in[i];
		 j++;
		}
		 i++;
		
	}
	while(s.gettop()!=0)
	{
		char z;
        z=s.pop(); cout<<out[j]<<endl;
		if (z=='(')
			continue;
		else
		{
			out[j]=z;
		    j++;
		} 

	}
	for(int k=0;k<j;k++)
		cout<<out[k];
	cout<<endl<<endl;
	system("pause");
}

