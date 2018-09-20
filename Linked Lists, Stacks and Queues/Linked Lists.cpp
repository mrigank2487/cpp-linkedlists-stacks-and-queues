#include<iostream>
#include<conio.h>
using namespace std;
class LinkedLists
 {
   struct node
    {
		int data;
		node *link;
    }*p;
  public:
	  LinkedLists()
	   {
		  p=NULL;
	   }

	  void append(int num)
	   {
         node *temp,*temp2;

		  if(p==NULL)
		   {
               temp=new node;
			   temp->data=num;
			   temp->link=NULL;
			   p=temp;
		   }

		  else
		   {
			   temp=p;

			   while(temp->link!=NULL)
			     {
				   temp=temp->link;
			     }

			   temp2=new node;
			   temp2->data=num;
			   temp2->link=NULL;
			   temp->link=temp2;
		   }
	  }
	  
	  void add_at_beginning(int num)
	  {
		  node *temp,*temp2;

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

      void insert_data(int spot,int num)
	  {
		  node *temp,*temp2;
		  temp=p;

		  for(int i=1;i<spot-1;i++)
		     temp=temp->link;

		  temp2=new node;
		  temp2->data=num;
		  temp2->link=temp->link;
		  temp->link=temp2;
		  
	  }
  
	  void delete_data(int num)
	  {
		node *temp,*previous;
		temp=p;
		

		 while(temp!=NULL)
		  {
		   if(num==temp->data)
		   {
			   if(temp==p)
			   {
				   p=p->link;
				   delete temp;
				   return;
			   }
			   
			   if(temp->link==NULL)
			   { 
				  previous->link=NULL;
				  delete temp;
				  return;
			   }
			   else 
			   {
				  previous->link=temp->link;
				  delete temp;
				  return;
			   }
		   }
		   else
		   { 
			 previous=temp;
		     temp=temp->link; 
		   }
        }
	  }




	  void display()
	  {
		  node *temp;
		  temp=p;
		  if(p==NULL)
			  cout<<"Linked List is empty."<<endl;
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
	char ch;
	LinkedLists ll;
	int x,num;

	 do
	 {
		  cout<<"Press 1 to Append: "<<endl;
		  cout<<"Press 2 to add at the beginning: "<<endl;
		  cout<<"Press 3 to insert data: "<<endl;
		  cout<<"Press 4 to delete data: "<<endl;
		  cout<<"Press 5 to display: "<<endl;
		  cin>>x;

		  switch(x)
		  {
		   case 1:
			   cout<<"Enter data to appened: ";
			   cin>>num;
			   ll.append(num);
			   break;

		   case 2:
			   cout<<"Enter data to add at the beginning: "<<endl;
			   cin>>num;
			   ll.add_at_beginning(num);
			   break;

		   case 3:
			   int spot;
               cout<<"Enter spot: ";
			   cin>>spot;
			   cout<<endl<<"Enter data to be inserted at spot: "<<spot<<endl;
			   cin>>num;
			   ll.insert_data(spot,num);
			   break;
		   case 4:
			   cout<<"Enter data to be deleted: ";
			   cin>>num;
			   ll.delete_data(num);

		   case 5:
			   ll.display();
			   break;
		  }
		  cout<<"Add more records? (y/n)"<<endl<<endl;
		  ch=getch();
	 } while(ch!='n'||ch!='N');

	 system("pause");
}