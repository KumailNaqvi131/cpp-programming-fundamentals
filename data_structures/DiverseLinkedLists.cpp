#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node
{
	int data;
	node *nxtad;
	node *prevad;
};
node *head=NULL;
node *curr;


int main() 
{
/*	int num=0;
	cout<<"enter number : ";
	cin>>num;
	cout<<endl;
	
	for(int i=1;i<=num;i+=2)
	{
		for(int sp=(num-i)/2;sp>=1;sp--)
		{
		    cout<<" ";	
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	int option;
	do{
	

cout<<"enter 1 for single forward link list";
cout<<endl;
cout<<"enter 2 for single circular link list";
cout<<endl;
cout<<"enter 3 for doudle forward link list";
cout<<endl;
cout<<"enter 4 for double circular link list";
cout<<endl;
cout<<"enter 5 for exit from link list";
cout<<endl;
cout<<"SELECT OPTION : ";
cin>>option;
cout<<endl;



	
//////////////////////////////////////////////////////////////////////////<<<INSERTION>>>/////////////////////////////////////////////////////////////////////////////////////////	
  
  if(option==1)
  {
	  char choice;
    cout<<"INSERTION"<<endl;
    
	do{
			
	if(head==NULL)
   	{
   		node *newnode=new node;
   		cout<<"enter data : ";
   		cin>>newnode->data;
   		cout<<endl;
   		newnode->nxtad=NULL;
   		head=newnode;
   		curr=head;
   		
	}
	else
	{
		node *newnode=new node;
		cout<<"enter data : ";
		cin>>newnode->data;
		cout<<endl;
		newnode->nxtad=NULL;
		curr->nxtad=newnode;
		curr=curr->nxtad;
		
		
	}
	cout<<"enter your choice (y/n) : ";
	cin>>choice;	
	cout<<endl;
		
	}
	while(choice!='n');
	
	curr=head;
	int count=1;
	while (curr->nxtad!=NULL)
	{
		cout<<curr->data<<"at node : "<<count<<endl;
		curr=curr->nxtad;
		count++;
	}
	cout<<curr->data<<" at node : "<<count<<endl;
/////////////////////////////////////////////////////////////////////////////////<<<INSERTION END>>>/////////////////////////////////////////////////////////////////////	
	
	
	
//////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>////////////////////////////////////////////////////////////////////////////	

do{
	int key;
	cout<<"enter data to search : ";
	cin>>key;
	cout<<endl;
	curr=head;
	int numnode=1;
	
	while(curr->nxtad!=NULL)
	{
		if(curr->data!=key)
		{
			curr=curr->nxtad;
			numnode++;
		}
		else 
		{
			cout<<"data found at "<<numnode<<" node"<<endl;
			break;
		}
		
	}
	while(curr->nxtad==NULL)
	{
		if(curr->data==key)
		{
		cout<<"data found at "<<numnode<<endl;
		cout<<curr->data<<endl;
		break;
	    }
	    else
		{
			cout<<"data not found !!"<<endl;
			break;            
		}
	}
	cout<<"do you want to continue search (y/n) : ";
	cin>>choice;
	cout<<endl;
	
}while(choice!='n');
////////////////////////////////////////////////////////////////////////////<<<SEARCHING END>>>//////////////////////////////////////////////////////////////////////////////	
	
	
////////////////////////////////////////////////////////////////////////////<<<DELETION>>>//////////////////////////////////////////////////////////////////////////////////	



 do{
 curr=head;	

	int del;
	cout<<"enter number to delete : ";
	cin>>del;
	cout<<endl;
	
if(head->data==del)	
{  
     head=head->nxtad;
	 curr->nxtad=NULL;
	curr=head;
	
}	
curr=head;
while(curr->nxtad->nxtad!=NULL)
{
	if(curr->nxtad->data==del)
		{
			node *temp=curr->nxtad;
			curr->nxtad=temp->nxtad;
			temp->data=NULL;
		}
		curr=curr->nxtad;
}
	if(curr->nxtad->data==del)
		{
			node *temp=curr->nxtad;
			curr->nxtad=temp->nxtad;
			temp->data=NULL;
		}
		
		
		
		cout<<"enter your choice (y/n) : ";
		cin>>choice;
		cout<<endl;
		
	}while(choice!='n');
		
		
	curr=head;
	while (curr->nxtad!=NULL)
	{
		cout<<curr->data<<endl;
		curr=curr->nxtad;
		
	}
	cout<<curr->data<<endl;	
}
/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CODE FOR SINGLE CIRCULAR LINK LIST.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/  
  if(option==2)
  {
	  char choice;
    cout<<"INSERTION"<<endl;
    
	do{
			
	if(head==NULL)
   	{
   		node *newnode=new node;
   		cout<<"enter data : ";
   		cin>>newnode->data;
   		cout<<endl;
   		newnode->nxtad=head;
   		head=newnode;
   		curr=head;
   		
	}
	else
	{
		node *newnode=new node;
		cout<<"enter data : ";
		cin>>newnode->data;
		cout<<endl;
		newnode->nxtad=head;
		curr->nxtad=newnode;
		curr=curr->nxtad;
		
		
	}
	cout<<"enter your choice (y/n) : ";
	cin>>choice;	
	cout<<endl;
		
	}
	while(choice!='n');
	
	curr=head;
	int count=1;
	while (curr->nxtad!=head)
	{
		cout<<curr->data<<"at node : "<<count<<endl;
		curr=curr->nxtad;
		count++;
	}
	cout<<curr->data<<" at node : "<<count<<endl;
/////////////////////////////////////////////////////////////////////////////////<<<INSERTION END>>>/////////////////////////////////////////////////////////////////////	
	
	
	
//////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>////////////////////////////////////////////////////////////////////////////	

do{
	int key;
	cout<<"enter data to search : ";
	cin>>key;
	cout<<endl;
	curr=head;
	int numnode=1;
	
	while(curr->nxtad!=head)
	{
		if(curr->data!=key)
		{
			curr=curr->nxtad;
			numnode++;
		}
		else 
		{
			cout<<"data found at "<<numnode<<" node"<<endl;
			break;
		}
		
	}
	while(curr->nxtad==head)
	{
		if(curr->data==key)
		{
		cout<<"data found at "<<numnode<<endl;
		cout<<curr->data<<endl;
		break;
	    }
	    else
		{
			cout<<"data not found !!"<<endl;
			break;            
		}
	}
	cout<<"do you want to continue search (y/n) : ";
	cin>>choice;
	cout<<endl;
	
}while(choice!='n');
////////////////////////////////////////////////////////////////////////////<<<SEARCHING END>>>//////////////////////////////////////////////////////////////////////////////	
	
	
////////////////////////////////////////////////////////////////////////////<<<DELETION>>>//////////////////////////////////////////////////////////////////////////////////	



 do{
 curr=head;	

	int del;
	cout<<"enter number to delete : ";
	cin>>del;
	cout<<endl;
	
if(head->data==del)	
{  
     head=head->nxtad;
	 curr->nxtad=head;
	curr=head;
	
}	
curr=head;
while(curr->nxtad->nxtad!=head)
{
	if(curr->nxtad->data==del)
		{
			node *temp=curr->nxtad;
			curr->nxtad=temp->nxtad;
			temp->data=NULL;
		}
		curr=curr->nxtad;
}
	if(curr->nxtad->data==del)
		{
			node *temp=curr->nxtad;
			curr->nxtad=temp->nxtad;
			temp->data=NULL;
		}
		
		
		
		cout<<"enter your choice (y/n) : ";
		cin>>choice;
		cout<<endl;
		
	}while(choice!='n');
		
		
	curr=head;
	while (curr->nxtad!=head)
	{
		cout<<curr->data<<endl;
		curr=curr->nxtad;
		
	}
	cout<<curr->data<<endl;	
}

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CODE FOR DOUBLE FORWARD LINK LIST.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/ 



if(option==3)
{
	char choice;

do{

   if(head==NULL)
{
	node *newnode= new node;
	cout<<"enter data : ";
	cin>>newnode->data;
	cout<<endl;
	newnode->nxtad=NULL;
	newnode->prevad=NULL;
	head=newnode;
	curr=head;
	
	
}
else
{
	node *newnode=new node;
	cout<<"enter data : ";
	cin>>newnode->data;
	cout<<endl;
	newnode->nxtad=NULL;
	curr->nxtad=newnode;
	newnode->prevad=curr;
	curr=curr->nxtad;
}
cout<<"enter your choice (y/n) :";
cin>>choice;
cout<<endl;


}while(choice!='n');
curr=head;
int count=1;
cout<<"FORWARD DISPLAY!"<<endl;
while(curr->nxtad!=NULL)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->nxtad;
	count++;
}
cout<<curr->data<<"at node : "<<count<<endl;

cout<<"BACKWARD DISPLAY!"<<endl;
curr=head;
count=count;
while(curr->nxtad!=NULL)
{
	curr=curr->nxtad;
	
}
while(curr->prevad!=NULL)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->prevad;
	count--;
}
cout<<curr->data<<"at node : "<<count<<endl;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>//////////////////////////////////////////////////////////////////////////////
do{

curr=head;
int key;
cout<<"enter data to search : ";
cin>>key;
cout<<endl;
int count=1;
while(curr->nxtad!=NULL)
{
	if(curr->data==key)
	{
		cout<<curr->data<<"found at "<<count<<"node. "<<endl;
		curr=curr->nxtad;
		
	}
	else
	{
		curr=curr->nxtad;
	}
	count++;
}
if(curr->nxtad==NULL)
{   
	if(curr->data==key)
	{
		cout<<curr->data<<"found at "<<count<<"node. "<<endl;
		
	}
	
}

cout<<"enter your choice (y/n) : ";
cin>>choice;
cout<<endl;

}while(choice!='n');
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>//////////////////////////////////////////////////////////////////////////////

do
{
int del;
cout<<"enter value to delete : ";
cin>>del;
cout<<endl;

curr=head;
if(head->data==del)
{
	head=head->nxtad;
	head->prevad=NULL;
	curr->nxtad=NULL;
	curr=head;
}



curr=head;

while(curr->nxtad->nxtad!=NULL)
{
	if(curr->nxtad->data==del)
	{
		node *temp=curr->nxtad;
		node *temp2=temp->nxtad;
		curr->nxtad=temp2;
		temp->nxtad=NULL;
		temp->prevad=NULL;
		temp2->prevad=curr;
	}
	curr=curr->nxtad;
}

if(curr->nxtad->data==del)
{
	node *temp=curr->nxtad;
	curr->nxtad=temp->nxtad;
	temp->nxtad=NULL;
	temp->prevad=NULL;
}

curr=head;
int count=1;
cout<<"FORWARD DISPLAY!"<<endl;
while(curr->nxtad!=NULL)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->nxtad;
	count++;
}
cout<<curr->data<<"at node : "<<count<<endl;





cout<<"enter your choice (y/n) : ";
cin>>choice;
cout<<endl;

}while(choice!='n');
}
/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CODE FOR DOUBLE CIRCULAR LINK LIST
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/


if(option==4)
{
	char choice;

do{

   if(head==NULL)
{
	node *newnode= new node;
	cout<<"enter data : ";
	cin>>newnode->data;
	cout<<endl;
	newnode->nxtad=head;
	newnode->prevad=head;
	head=newnode;
	curr=head;
	
	
}
else
{
	node *newnode=new node;
	cout<<"enter data : ";
	cin>>newnode->data;
	cout<<endl;
	newnode->nxtad=head;
	curr->nxtad=newnode;
	newnode->prevad=curr;
	curr=curr->nxtad;
}
cout<<"enter your choice (y/n) :";
cin>>choice;
cout<<endl;


}while(choice!='n');
curr=head;
int count=1;
cout<<"FORWARD DISPLAY!"<<endl;
while(curr->nxtad!=head)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->nxtad;
	count++;
}
cout<<curr->data<<"at node : "<<count<<endl;

cout<<"BACKWARD DISPLAY!"<<endl;
curr=head;
count=count;
while(curr->nxtad!=head)
{
	curr=curr->nxtad;
	
}
while(curr->prevad!=head)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->prevad;
	count--;
}
cout<<curr->data<<"at node : "<<count<<endl;
count--;
curr=curr->prevad;
cout<<curr->data<<"at node : "<<count<<endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>//////////////////////////////////////////////////////////////////////////////
do{

curr=head;
int key;
cout<<"enter data to search : ";
cin>>key;
cout<<endl;
int count=1;
while(curr->nxtad!=head)
{
	if(curr->data==key)
	{
		cout<<curr->data<<"found at "<<count<<"node. "<<endl;
		curr=curr->nxtad;
		
	}
	else
	{
		curr=curr->nxtad;
	}
	count++;
}
if(curr->nxtad==head)
{   
	if(curr->data==key)
	{
		cout<<curr->data<<"found at "<<count<<"node. "<<endl;
		
	}
	
}

cout<<"enter your choice (y/n) : ";
cin>>choice;
cout<<endl;

}while(choice!='n');
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////<<<SEARCHING>>>//////////////////////////////////////////////////////////////////////////////

do
{
int del;
cout<<"enter value to delete : ";
cin>>del;
cout<<endl;

curr=head;
if(head->data==del)
{
	head=head->nxtad;
	head->prevad=NULL;
	curr->nxtad=NULL;
	curr=head;
}



curr=head;

while(curr->nxtad->nxtad!=head)
{
	if(curr->nxtad->data==del)
	{
		node *temp=curr->nxtad;
		node *temp2=temp->nxtad;
		curr->nxtad=temp2;
		temp->nxtad=NULL;
		temp->prevad=NULL;
		temp2->prevad=curr;
	}
	curr=curr->nxtad;
}

if(curr->nxtad->data==del)
{
	node *temp=curr->nxtad;
	curr->nxtad=temp->nxtad;
	temp->nxtad=NULL;
	temp->prevad=NULL;
}

curr=head;
int count=1;
cout<<"FORWARD DISPLAY!"<<endl;
while(curr->nxtad!=head)
{
	cout<<curr->data<<"at node : "<<count<<endl;
	curr=curr->nxtad;
	count++;
}
cout<<curr->data<<"at node : "<<count<<endl;





cout<<"enter your choice (y/n) : ";
cin>>choice;
cout<<endl;

}while(choice!='n');
}


}while(option!=5);


	system("pause");
	return 0;
}
