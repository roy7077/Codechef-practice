#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    
    // int a=10;
    // int b=5;
    // int c=20;
    // int d=9;
    // cout<<(a^b)<<endl;
    // cout<<(a^c)<<endl;
    // cout<<(b^d)<<endl;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    
	    ll cnt_even=0;
	    ll cnt_odd=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        ll a;
	        cin>>a;
	        
	        if(a&1)
	        cnt_odd++;
	        else
	        cnt_even++;
	    }
	    
	    //if x is odd
	    if(x&1)
	    {
	        ll ans=cnt_even/2;
	        if(cnt_even&1)
	        cout<<ans+1<<endl;
	        else
	        cout<<ans<<endl;
	        
	        continue;
	    }
	    
	    //if cnt_even is less than n
	    if(cnt_even<n)
	    cout<<cnt_even<<endl;
	    else
	    cout<<"-1"<<endl;
	   // if(cnt_odd or x&1)
	   // cout<<cnt_even<<endl;
	   // else
	   // cout<<"-1"<<endl;
	}
	return 0;
}
