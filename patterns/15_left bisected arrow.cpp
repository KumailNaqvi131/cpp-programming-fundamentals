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
		{	  if( st==1 || st==i || i==size)
				cout<<"*";
				else
				cout<<" ";
					
		}
		cout<<endl;	
		
    }
     
	
	for( int i=2;i<=size;i++)
	{
		for(int j=i;j>1;j--)
		{
			
			cout<<" ";
		}
		for(int s=i;s<=size;s++)
		{
			if(s==i || s==size )
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

