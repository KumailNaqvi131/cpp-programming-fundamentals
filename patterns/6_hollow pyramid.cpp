#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
cout<<"enter the number of star in last row:";
	cin>>size;
cout<<endl;
	int sp;
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
		     	if(st==i)
		     	{   cout<<"*";}
		    	else
		    	{	cout<<" ";}
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
