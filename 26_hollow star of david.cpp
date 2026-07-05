#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	for(int i=1;i<=(size+1)/2;i+=2)
	{
		sp=((size+1)-i)/2;
		for(;sp>=1;sp--)
		{
			cout<<" ";
		}
		
		for(int st=1; st<=i;st++)
		{
			if(st==1 || st==i)
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
	for(int i=size;i>=(size+1)/2;i-=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		
		for(int st=1; st<=i;st++)
		{
				if( st==1 || st==i || i==size)
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
		for(int i=(size-1)/2;i<=size;i+=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		
		for(int st=1; st<=i;st++)
		{
			if(st==1 || st==i || i==size)
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
		for(int i=(size-1)/2;i>=1;i-=2)
	{
		sp=((size+1)-i)/2;
		for(;sp>=1;sp--)
		{
			cout<<" ";
		}
		
		for(int st=1; st<=i;st++)
		{
			if (st==1 || st==i )
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

