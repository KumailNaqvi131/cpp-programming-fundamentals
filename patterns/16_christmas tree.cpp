#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cin>>size;
	int sp;
	for( int s=1;s<=3;s++)
	{
	for(int i=1;i<=size;i+=2)
	{
		sp=(size-i)/2;
		for( ;sp>=1;sp--)
		{
			cout<<" ";
		}
		for(int st=1;st<=i;st++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
	system("pause");
	return 0;
}
