#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{ int r;
int i;
cin>>r;
	
	for( i=1;i<=r;i++)
	{
		for(int j=i;j>1;j--)
		{
			
			cout<<" ";
		}
		for(int s=i;s<=r;s++)
		{
			if(s==i || s==r || i==1)
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

