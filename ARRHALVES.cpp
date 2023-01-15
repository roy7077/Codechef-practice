#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	//test case
	ll t;
	cin>>t;
	while(t--)
	{
	    //n- size of a half array
	    ll n;
	    cin>>n;
	    vector<ll> v(2*n);
	    
	    //taking array input
	    for(int i=0;i<(2*n);i++)
	    cin>>v[i];
	    
	    vector<ll> first_half,second_half;
	    for(int i=0;i<(2*n);i++)
	    {
	        if(i<n)
	        {
	            if(v[i]>n)
	            first_half.push_back(i);
	        }else
	        {
	            if(v[i]<=n)
	            second_half.push_back(i);
	        }
	        
	    }
	    
	    
	    ll ans=0;
	    for(int i=0;i<second_half.size();i++)
	    {
	        ans+=second_half[i]-first_half[i];
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
