#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int size;
	cout<<"Enter max value: ";
	cin>>size;
	int sp;
	
	
	for(int r=size;r>=1;r-=2)
	{
		 sp=(size-r)/2;
		for(;sp>0;sp--)
		{
		    cout<<" ";	
		}		
		for(int st=r;st>0;st--)
		{
			cout<<"*";  
    	}	
	cout<<endl;
	}
	system("pause");
	return 0;
}











