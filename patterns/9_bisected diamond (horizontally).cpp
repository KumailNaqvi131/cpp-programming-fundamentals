#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	for(int i=1;i<=(size-2);i+=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
		{
			cout<<" ";
		}
		
		for(int st=1; st<=i;st++)
		{
			if(st==i || st==1)
			{   
				cout<<"*";
			}
			else
			{
		     		cout<<" ";
			}
		}
		cout<<endl;
	}
for(int i=size;i>=1;i-=2)
	{
		
		for(sp=1;sp<=(size-i)/2;sp++)
	 	{
			cout<<" ";	
		}
		
		for(int st=i; st>=1;st--)
		{
			if( st==i || st==1 || i==size)
		   {
		   	cout<<"*";
		   }
		   else
	     	{
				cout<<" ";
			}
		   
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
