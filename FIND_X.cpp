#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    a%=b;
	    c%=d;
	    
	    if((a+1)%b==(c+1)%d)
	    cout<<"1"<<endl;
	    else
	    {
	        ll lcm=(b*d)/__gcd(b,d);
	        cout<<lcm-a<<endl;
	    }
	}
	return 0;
}
