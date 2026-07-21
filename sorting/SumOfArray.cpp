#include <iostream>


using namespace std;
int main(int argc, char** argv) 
{
	cout<<"\t\t****************************************"<<endl;
	cout<<"\t\t**    sum of diagonal array           **"<<endl;
	cout<<"\t\t**    sum of reverse diagonal         **"<<endl;
	cout<<"\t\t**    array.                          **"<<endl;
	cout<<"\t\t**                                    **"<<endl;
	cout<<"\t\t**    by :                            **"<<endl;
	cout<<"\t\t**        KUMAIL NAQVI                **"<<endl;
	cout<<"\t\t**                                    **"<<endl;
	cout<<"\t\t****************************************"<<endl;	

	int array [5][5];
		for(int i=0;i<5;i++)
		{
	
			for (int j=0;j<5;j++)
			{
				cout<<"\t\tenter number in a array  "<<i<<"\t:";
				cin>>array[i][j];
				cout<<endl;
			}//ending of loop j.
		}//ending of loop i.
		
		for(int k=0;k<5;k++)
		{
			for(int z=0;z<5;z++)
			{
				cout<<"\t\tvalue stored in array:\t"<<array[k]  [z]<<"\t";
				cout<<endl;
				
			}//ending of loop z.
		}//ending of loop k.
		int sum=0;
		for (int h=0;h<5;h++)
		{
			for(int g=0;g<5;g++)
			{
				if(h==g)
				{
					sum=sum+array[h][g];
				}//if statement.
			}//loop g.
		}//loop h.
	int sum2=0;	
	int o=0;
			for(int c=4;c>=0;c--)
			{
				sum2=sum2+array[o][c];
				o++;
			}	
			
		cout<<"\t\tyour sum of reverse diagonal array is : "<<sum2<<"\t";	
		cout<<endl;
		
		
		cout<<"\t\tyour sum of diagonl array is : "<<sum<<"\t";
		cout<<endl;
		
		system ("pause");
	return 0;
}
