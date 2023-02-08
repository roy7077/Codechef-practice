#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    
	    if(a+b>=x or b+c>=x or a+c>=x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - o(t)