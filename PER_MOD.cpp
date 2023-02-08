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
	    
	    for(int i=2;i<=n;i++)
	    cout<<i<<" ";
	    
	    if(n>=1)
	    cout<<1<<endl;
	}
	return 0;
}

// time _Complexity - o(t*n)