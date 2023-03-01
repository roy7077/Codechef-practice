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
	    
	    int i=n;
	    int j=1;
	    for(int k=1;k<=n;k++)
	    {
	        if(k&1)
	        {
	            cout<<j<<" ";
	            j++;
	        }
	        else
	        {
	            cout<<i<<" ";
	            i--;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)