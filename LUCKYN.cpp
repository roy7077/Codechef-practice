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
	    
	    bool found=0;
	    while(n)
	    {
	        int last=n%10;
	        n/=10;
	        if(last==7)
	        {
	            found=1;
	            break;
	        }
	    }
	    
	    if(found)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
