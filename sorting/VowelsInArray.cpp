#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
	char array [5][5];
	int j=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		
		cout<<"enter the alphabets  in array:"<<"\t";
		cin>>array[i][j];
		cout<<endl;
     	}
	}
	    for(int i=0;i<4;i++)
	    
	    {
		 for(int j=0;j<4;j++)
		{
		 switch(array[i][j]!='*')
		{
				case'a'||'A':
			{
			cout<<" the vowels: in array:"<<"\t";
			
		    cout<<endl;
		    }
			case'e'||'E':
			{
					cout<<" the vowels: in array:"<<"\t";
		            
		            cout<<endl;
		    }
			
			case'i'||'I':
			{
				cout<<" the vowels: in array:"<<"\t";
		        
		        cout<<endl;
		    }
			
			case'o'||'O':
			    {
		    	cout<<" the vowels: in array:"<<"\t";
		        
		        cout<<endl;
				}
			
			case'u' || 'U':
		   {
			cout<<" the vowels: in array:"<<"\t";
	     	
	       cout<<endl;
	       }
	       default:
	       {
	       	cout<<"not a vowel"<<endl;
		   }
	}
		}
	}
	system("pause");
	return 0;
}
