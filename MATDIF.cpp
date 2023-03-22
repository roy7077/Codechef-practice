#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int num=n*n;
	    
	    //first half
	    int num1=num;
	    int num2=num-1;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(num1>0)
	            {
	                cout<<num1<<" ";
	                num1-=2;
	            }
	            else
	            {
	                cout<<num2<<" ";
	                num2-=2;
	            }
	        }
	        cout<<endl;
	    }
	    
	    //second half
	   // int num2=1;
	   // for(int i=0;i<(n/2);i++)
	   // {
	   //     for(int j=0;j<n;j++)
	   //     {
	   //         cout<<num2<<" ";
	   //         num2+=2;
	   //     }
	   //     cout<<endl;
	   // }
	}
	return 0;
}


