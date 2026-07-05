#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{ int r;
int i;
cin>>r;
	
	
	for( i=1;i<=r;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i==j || i==r || j==1)
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
