#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	int b=1;
	for(int i=1;i<=size;i+=2)
	{
		sp=(size-i)/2;
		for(;sp>=1;sp--)
	 	{
			cout<<" ";	
		}
		cout<<"*";
		for(int st=2; st<=i;st++)
		{
			if(i==size)
		   {
		   	cout<<"*";
		   }
		   else
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
		   
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}

