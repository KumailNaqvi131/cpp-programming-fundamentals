#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	
	for(int i=1;i<=size;i++)
	{
		
		cout<<"*";
		for(int st=2; st<=i;st++)
		{
			if(i==size)
			{   
				cout<<"*";
			}
			else
			{
		     	
		     	  cout<<"*";
		    	
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
