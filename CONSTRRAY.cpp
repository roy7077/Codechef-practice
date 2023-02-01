#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    //ll x=ceil(double(n)/2);
	    
	    if(n&1)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	   // vector<ll> v(n+1);
	    for(ll i=0;i<(n-1)/2;i++)
	    {
	        
	        cout<<"2 -2 ";
	        //cout<<
	       // if(i&1)
	       // {
	       //     //cout<<i<<endl;
	       //     v[i]=1;
	       //     v[n-i+1]=-1;
	       // }
	       // else
	       // {
	       //    // cout<<i<<endl;
	       //     v[i]=-1;
	       //     v[n-i+1]=2;
	       // }
	    }
	    cout<<"2 1"<<endl;
	   // if(n&1)
	   // v[x]=1;
	    
	   // for(int i=1;i<=n;i++)
	   // cout<<v[i]<<" ";
	   
	   //cout<<endl;
	}
	return 0;
}
