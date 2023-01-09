#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    vector<ll> w(n);
	    for(int i=0;i<n;i++)
	    cin>>w[i];
	    
	    ll tc=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if(w[i]==0)
	            tc=0;
	            else
	            tc+=x;
	        }else
	        {
	            if((w[i]==0 and w[i-1]==1) or w[i]==1)
	            tc+=x;
	        }
	    }
	    cout<<tc<<endl;
	}
	return 0;
}
