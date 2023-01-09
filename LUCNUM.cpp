#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    ll count=0;
	    while(n%2==0)
	    {
	        count++;
	        n/=2;
	    }
	    
	    if(count&1)
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
