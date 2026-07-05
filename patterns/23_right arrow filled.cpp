#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	
	for(int i=1;i<=size;i++)
	{
		
	
		for(int st=1; st<=i;st++)
		{	  
				cout<<"*";
					
		}
		
	
		cout<<endl;	
	}
	for(int i=(size-1);i>=1;i--)
	{
	
		for(int st=1; st<=i;st++)
		{	  
				cout<<"*";
					
		}
		
	
		cout<<endl;	
	}
	
	
	system("pause");
	return 0;
}
