#include <iostream>
using namespace std;
#define ll long long


int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y;
	    cin>>x>>y;
	    
	    ll n=0;
	    n=(x*y)-x-y;
	    if(n>=1)
	    cout<<n<<endl;
	    else
	    {
	        n+=2*x*y;
	        cout<<n<<endl;
	    }
	}
	return 0;
}
