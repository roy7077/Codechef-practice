#include <iostream>
using namespace std;
#define ll long long
ll power(ll base,ll n)
{
    ll ans=1;
    while(n)
    {
        if(n&1)
        {
            n=n-1;
            ans=ans*base;
        }else
        {
            n/=2;
            base=base*base;
        }
    }
    return ans;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll int x,m,y,last;
	    cin>>x>>m;
	    
	    ll int finalans=0;
	    while(x)
	    {
	        last = x % 10;
            y = m % 4;
            if (y == 0 && m != 0)
            {
                y = 4;
            }
	        
	        ll int ans=power(x%10,y);
	        x=x/10;
	        finalans+=ans%10;
	        if(x)
	        finalans*=10;
	    }
	    
	    if(finalans%7==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   //cout<<finalans<<endl;
	}
	return 0;
}
