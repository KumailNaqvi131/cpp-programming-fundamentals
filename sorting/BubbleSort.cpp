#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int Array_sort(int);
int array[10];
int main(int argc, char** argv) 
{ 
	int i;
	for(int i=0;i<10;i++)
	{
		cout <<"enter in the number in array : ";
		cin>>array[i];
	}
	 Array_sort (i);
	system("pause");
	return 0;
}
int Array_sort(int i)
{ 
	int temp=0;
	for(int k=0;k<9;k++)
	{
		for(int l=0;l<9;l++)
		{
			if(array[l]>array[l+1])
			{
				temp=array[l];
				array[l]=array[l+1];
				array[l+1]=temp;
			
			}
		}
	}
for(int y=0;y<10;y++)
{
	cout<<"sorted array is :"<<array[y]<<endl;
	
}


}


