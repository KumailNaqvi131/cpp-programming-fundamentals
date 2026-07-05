#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	for(int i=1;i<=size;i++)
	{
		sp=(size-i);
		for(;sp>=1;sp-=1)
		{
			cout<<" ";
			
		}
		for(int st=1; st<=i;st++)
		{	  
				cout<<"*";
					
		}
		cout<<endl;	
		
    }
    int b=1;
    	for(int i=1;i<=size;i++)
	{
		
		
		for(sp=1;sp<=i;sp++)
		{
			cout<<" ";
			
			
		}
		for(int st=(size-b); st>=1;st--)
		{	  
				cout<<"*";
					
		}
		cout<<endl;	
		b=b+1;
    }
	system("pause");
	return 0;
}
