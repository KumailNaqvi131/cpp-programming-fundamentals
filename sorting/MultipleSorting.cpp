#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{char cho;
	do{
	
	int num=0,choice;
	cout<<"\t 1:insertion sort "<<endl;
	cout<<"\t 2:buble sort "<<endl;
	cout<<"\t 3:selection sort "<<endl;
	
	cout<<"enter choice of sorting : ";
	cin>>choice;
	cout<<endl;
	
	
	cout<<"enter length of an array : ";
	cin>>num;
	cout<<endl;
	
	
	
	int *array=new int [num]; 
	for(int i=0;i<num;i++)
	{
		cout<<"enter elements in array : ";
		cin>>array[i];
		cout<<endl;
	}
	
	if(choice==1)
	{
	
	cout<<"\t\t\tSorting ...";
	cout<<endl;
	cout<<endl;
	int temp,j;
	for(int i=0;i<num;i++)
    	{
			j=i;
			while(j>0 && array[j]<array[j-1])
	    	{
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
				j--;
				
	    	}
	    }
    }

if(choice==2)
{
	int temp;
	for(int i=0;i<(num-1);i++)
	{
		for(int j=0;j<(num-1);j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
		
	}
	
	
}
if(choice==3)
{
	int temp,min;
	
	for(int i=0 ;i<num;i++)
	{
		min=i;
		for(int j=i+1; j<num; j++ )
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		if(min!= i)
		{
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}	
	}	
}



	cout<<"\t\t\tSorted array ";
	cout<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<array[i]<<endl;
	}
	
	cout<<"do you want to continue the program  y/n : ";
	cin>>cho;
	cout<<endl;
}while(cho !='n');
	
	system ("pause");
	return 0;
}
