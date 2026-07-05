#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
        cout<<"Enter max value of stars in last row: ";
	cin>>size;
cout<<endl;
	int sp;
	int b=1;
	for(int i=1;i<=(size-2);i+=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		
		for(int st=1; st<=i;st++)
	{
		cout<<"*";
		   
	}
		   
		
		cout<<endl;
	}
	
	for(int i=size;i>=1;i-=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		
		for(int st=1; st<=i;st++)
		{
		   	cout<<"*";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
