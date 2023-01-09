#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(ll n)
{
    vector<ll> pf;
    
    //finding prime factors
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            pf.push_back(i);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>0)
    pf.push_back(n);
    
    ll ans=1;
    for(auto it:pf)
    ans*=it;
    
    cout<<ans<<endl;
}
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    solve(n);
	}
	
	return 0;
}

 