#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	int b=(size-1)/2;
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
			if(i==size || st==i || st==(i-b))
		   {
		   	cout<<"*";
		   	
		   }
		   else
		{
		
		   	cout<<" ";
		}
		   
		}b--;
		cout<<endl;
	}
	system("pause");
	return 0;
}
