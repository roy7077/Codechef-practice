#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    
	    vector<ll> v(n);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]<=k)
	        {
	            cout<<"1";
	            k-=v[i];
	        }else
	        cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)