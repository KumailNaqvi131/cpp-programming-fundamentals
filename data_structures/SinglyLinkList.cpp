#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct num
{
	int data;
	num *nxt_ad;
};
num *head=NULL;
num *current=head;
int main() 
{
/////////////////////////////////////////////////////////////>>>>>>>>>>INSERTION<<<<<<<<<<//////////////////////////////////////////////////////////////////////	
	cout<<"INSERTION MODE";
	cout<<endl;
	char choice;
	do{
	
	if(head==NULL)
	{
		num *newnum=new num;
		cout<<"enter data in the link list"<<endl;
		cin>>newnum->data;
		newnum->nxt_ad=NULL;
		head=newnum;
		current=head;
	}
	else
	{
		num *newnum=new num;
		cout<<"enter data in the link list"<<endl;
		cin>>newnum->data;
		newnum->nxt_ad=NULL;
		current->nxt_ad=newnum;
		current=current->nxt_ad;
	}
	cout<<"do you want to continue program (y/n) : ";
	cin>>choice;
	cout<<endl;
	}while(choice=='y');
	
	current=head;
	
			while(current->nxt_ad != NULL)
			{
				cout<<current->data<<endl;
				current=current->nxt_ad;
				
			}
	
	cout<<current->data<<endl;
	///////////////////////////////////////////////////////////////////>>>>>>>>>SEARCHING<<<<<<<<<<<<<///////////////////////////////////////////////////////////
cout<<"SEARCHING MODE";
cout<<endl;

	int num_node=1;
	int key;
	cout<<"enter data to search"<<endl;
	cin>>key;
	current=head;
	
	
			while(current->nxt_ad !=NULL)
			{
				
				if(current->data !=key)
				{
					current=current->nxt_ad;
					num_node++;
				}
				
				else
				{
					cout<<"data found at  ("<<num_node<<")"<<endl;
					break;
					
				}
			}
	
			while(current->nxt_ad==NULL)
			{
				if(current->data==key)
				{
					cout<<"data found at  ("<<num_node<<")"<<endl;
					cout<<current->data<<endl;
					break;
				}
			}
//////////////////////////////////////////////////////////////////>>>>>>>DELETION<<<<<</////////////////////////////////////////////////////////////////////	
cout<<"DELETION MODE";
cout<<endl;	

current=head;
int del;
cout<<"enter data to delete";	
	cin>>del;
	cout<<endl;
	if(head->data==del)
	{
		head=head->nxt_ad;
		current->nxt_ad=NULL;
		current=head;
	}
	current=head;
	
	while((current->nxt_ad)->data !=del)
	{
		
		current=current->nxt_ad;
	}
	num *temp=current->nxt_ad;
	current->nxt_ad=temp->nxt_ad;
	temp->nxt_ad=NULL;
	
	cout<<current->data<<endl;


	system("pause");
	return 0;
}
