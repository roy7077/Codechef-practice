#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    
	    if(n==1 or m==1)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    while(n!=m)
	    {
	        if(n>m)
	        n-=m;
	        else
	        m-=n;
	    }
	    cout<<n<<endl;
	}
	
	return 0;
}
