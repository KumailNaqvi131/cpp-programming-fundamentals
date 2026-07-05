#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int size;
	cout<<"Enter max value: ";
	cin>>size;
	int sp;
	
	
	for(int r=1;r<=size;r+=2)
	{
		 sp=(size-r)/2;
		for(;sp>=1;sp--)
		{
		    cout<<" ";	
		}		
		for(int st=1;st<=r;st++)
		{
			
			cout<<"*";  
    	}	
	cout<<endl;
	}
	system("pause");
	return 0;
}

