#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
cout<<endl;
	int sp;
	for(int i=size;i>=1;i-=2)
	{
		
		for(sp=1;sp<=(size-i)/2;sp++)
	 	{
			cout<<" ";	
		}
		
		for(int st=i; st>=1;st--)
		{
			if(i==size || st==i || st==1)
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


