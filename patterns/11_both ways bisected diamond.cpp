#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	int b=1;
	for(int i=1;i<=(size-2);i+=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		cout<<"*";
		for(int st=2; st<=i;st++)
	{
		
				
		   if(i==st)
		   {
		   	cout<<"*";
		   }
		   else
		   {
		   	if(st==(i-b))
		   	{
		   	cout<<"*";
		   	b++;
		   	
		    }
		   	else
		   	{
		   		cout<<" ";
		   	}
	   	   }
		   
	}
		   
		
		cout<<endl;
	}
	
	int b2=(size-1)/2;
	for(int i=size;i>=1;i-=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		cout<<"*";
		for(int st=2; st<=i;st++)
		{
			if(i==size||st==i || st==(i-b2))
		   {
		   	cout<<"*";
		   	
		   }
		   else
		{
		
		   	cout<<" ";
		}
		   
		}b2--;
		cout<<endl;
	}
	system("pause");
	return 0;
}
